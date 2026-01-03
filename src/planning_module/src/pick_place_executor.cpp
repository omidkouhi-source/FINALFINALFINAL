#include <rclcpp/rclcpp.hpp>
#include <chrono>
using namespace std::chrono_literals;

#include <robotiq_85_gripper_server/srv/gripper_open.hpp>
#include <robotiq_85_gripper_server/srv/gripper_close.hpp>

#include "planning_module/pick_place_planner.hpp"

class PickPlaceExecutor : public rclcpp::Node
{
public:
    PickPlaceExecutor() : Node("pick_place_executor")
    {
        declare_parameter<std::string>("pick_frame", "");
        declare_parameter<std::string>("place_square", "");

        pick_frame_ = get_parameter("pick_frame").as_string();
        place_square_ = get_parameter("place_square").as_string();

        if (pick_frame_.empty() || place_square_.empty()) {
            RCLCPP_ERROR(get_logger(), "Missing parameters!");
            rclcpp::shutdown();
            return;
        }

        RCLCPP_INFO(get_logger(), "Pick frame: %s", pick_frame_.c_str());
        RCLCPP_INFO(get_logger(), "Place square: %s", place_square_.c_str());

        planner_ = std::make_shared<planning_module::PickPlacePlanner>(shared_from_this());

        gripper_open_  = create_client<robotiq_85_gripper_server::srv::GripperOpen>("/GripperOpen");
        gripper_close_ = create_client<robotiq_85_gripper_server::srv::GripperClose>("/GripperClose");

        execute_sequence();
    }

private:

    void gripper_open()
    {
        if (!gripper_open_->wait_for_service(1s)) {
            RCLCPP_ERROR(get_logger(), "GripperOpen unavailable!");
            return;
        }
        auto req = std::make_shared<robotiq_85_gripper_server::srv::GripperOpen::Request>();
        req->order = true;
        gripper_open_->async_send_request(req);
        RCLCPP_INFO(get_logger(), "Gripper OPEN");
    }

    void gripper_close()
    {
        if (!gripper_close_->wait_for_service(1s)) {
            RCLCPP_ERROR(get_logger(), "GripperClose unavailable!");
            return;
        }
        auto req = std::make_shared<robotiq_85_gripper_server::srv::GripperClose::Request>();
        req->order = true;
        gripper_close_->async_send_request(req);
        RCLCPP_INFO(get_logger(), "Gripper CLOSE");
    }

    void execute_sequence()
    {
        RCLCPP_INFO(get_logger(), "=== Starting Pick & Place ===");

        // ---------- PICK ----------
        RCLCPP_INFO(get_logger(), "[1] Planning PICK...");
        if (!planner_->plan_and_execute_pick(pick_frame_)) {
            RCLCPP_ERROR(get_logger(), "Pick failed!");
            return;
        }

        rclcpp::sleep_for(500ms);
        gripper_close();
        rclcpp::sleep_for(500ms);

        // ---------- PLACE ----------
        RCLCPP_INFO(get_logger(), "[2] Planning PLACE...");
        if (!planner_->plan_and_execute_place(place_square_)) {
            RCLCPP_ERROR(get_logger(), "Place failed!");
            return;
        }

        rclcpp::sleep_for(500ms);
        gripper_open();
        rclcpp::sleep_for(500ms);

        RCLCPP_INFO(get_logger(), "=== FINISHED ===");
    }

    std::string pick_frame_;
    std::string place_square_;

    std::shared_ptr<planning_module::PickPlacePlanner> planner_;

    rclcpp::Client<robotiq_85_gripper_server::srv::GripperOpen>::SharedPtr  gripper_open_;
    rclcpp::Client<robotiq_85_gripper_server::srv::GripperClose>::SharedPtr gripper_close_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PickPlaceExecutor>());
    rclcpp::shutdown();
    return 0;
}
