#include "rclcpp/rclcpp.hpp"
#include "std_srvs/srv/trigger.hpp"
#include "planning_module/pick_place_planner.hpp"

#include <memory>
#include <string>

class PickServiceNode : public rclcpp::Node
{
public:
  PickServiceNode()
  : rclcpp::Node("pick_service_node")
  {
    service_ = this->create_service<std_srvs::srv::Trigger>(
      "pick_piece",
      std::bind(
        &PickServiceNode::handle_pick,
        this,
        std::placeholders::_1,
        std::placeholders::_2));

    RCLCPP_INFO(this->get_logger(), "PickServiceNode ready.");
  }

  void init()
  {
    // Now shared_from_this() is safe (node is owned by a shared_ptr)
    planner_ = std::make_shared<planning_module::PickPlacePlanner>(this->shared_from_this());
    RCLCPP_INFO(this->get_logger(), "PickServiceNode planner initialised.");
  }

private:
  void handle_pick(
    const std::shared_ptr<std_srvs::srv::Trigger::Request>,
    std::shared_ptr<std_srvs::srv::Trigger::Response> response)
  {
    if (!planner_) {
      response->success = false;
      response->message = "Planner not initialised (did you call init()?)";
      return;
    }

    // Hardcoded for now until sensing is connected
    const std::string target_square = "e2";

    RCLCPP_INFO(this->get_logger(), "Planning PICK at square: %s", target_square.c_str());

    const bool ok = planner_->plan_and_execute_pick(target_square);

    response->success = ok;
    response->message = ok ? "Pick planned/executed." : "Pick plan failed.";
  }

  std::shared_ptr<planning_module::PickPlacePlanner> planner_;
  rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr service_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);

  auto node = std::make_shared<PickServiceNode>();
  node->init();      

  rclcpp::spin(node);

  rclcpp::shutdown();
  return 0;
}
