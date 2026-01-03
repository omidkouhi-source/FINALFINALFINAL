#include "rclcpp/rclcpp.hpp"
#include "std_srvs/srv/trigger.hpp"
#include "planning_module/pick_place_planner.hpp"

#include <memory>
#include <string>

class PlaceServiceNode : public rclcpp::Node
{
public:
  PlaceServiceNode()
  : rclcpp::Node("place_service_node")
  {
    service_ = this->create_service<std_srvs::srv::Trigger>(
      "place_piece",
      std::bind(
        &PlaceServiceNode::handle_place,
        this,
        std::placeholders::_1,
        std::placeholders::_2));

    RCLCPP_INFO(this->get_logger(), "PlaceServiceNode ready.");
  }

  void init()
  {
    planner_ = std::make_shared<planning_module::PickPlacePlanner>(this->shared_from_this());
    RCLCPP_INFO(this->get_logger(), "PlaceServiceNode planner initialised.");
  }

private:
  void handle_place(
    const std::shared_ptr<std_srvs::srv::Trigger::Request>,
    std::shared_ptr<std_srvs::srv::Trigger::Response> response)
  {
    if (!planner_) {
      response->success = false;
      response->message = "Planner not initialised.";
      return;
    }

    // Hardcoded for now (later from perception / chess engine)
    const std::string target_square = "e4";

    RCLCPP_INFO(this->get_logger(),
                "Planning PLACE at square: %s",
                target_square.c_str());

    const bool ok = planner_->plan_and_execute_place(target_square);

    response->success = ok;
    response->message = ok ? "Place executed successfully."
                           : "Place plan failed.";
  }

  std::shared_ptr<planning_module::PickPlacePlanner> planner_;
  rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr service_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);

  auto node = std::make_shared<PlaceServiceNode>();
  node->init();                

  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
