/***********************************************************************

  Copyright 2010 Carnegie Mellon University and Intel Corporation
  Author: Mike Vande Weghe <vandeweg@cmu.edu>

  This file is part of owd.

  owd is free software; you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published by
  the Free Software Foundation; either version 3 of the License, or (at your
  option) any later version.

  owd is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

 ***********************************************************************/

#include <ros/ros.h>
#include <CANbus.hh>
#include <tf/transform_broadcaster.h>
#include <pr_msgs/BHState.h>
#include <pr_msgs/MoveHand.h>
#include <pr_msgs/ResetHand.h>
#include <pr_msgs/ResetFinger.h>
#include <pr_msgs/GetDOF.h>
#include <pr_msgs/RelaxHand.h>
#include <pr_msgs/SetHandProperty.h>
#include <pr_msgs/GetHandProperty.h>
#include <pr_msgs/SetSpeed.h>
#include <pr_msgs/SetHandTorque.h>

class BHD_280 {
public:
  ros::Publisher
    pub_handstate;
  ros::ServiceServer 
    ss_gethanddof,
    ss_movehand,
    ss_resethand,
    ss_resethandquick,
    ss_resetfinger,
    ss_sethandprop,
    ss_gethandprop,
    ss_relaxhand,
    ss_setspeed,
    ss_sethandtorque;

  ros::NodeHandle node;
  CANbus *bus;
  tf::TransformBroadcaster *tf_broadcaster;
  tf::Transform finger_link1_base[3];
  tf::Transform finger_link2_base, finger_link3_base;

  pr_msgs::BHState bhstate;
  double max_velocity;

  BHD_280(CANbus *cb);
  ~BHD_280();
  void Pump(ros::TimerEvent const& e);
  bool Publish();
  bool GetDOF(pr_msgs::GetDOF::Request &req,
	      pr_msgs::GetDOF::Response &res);
  bool RelaxHand(pr_msgs::RelaxHand::Request &req,
		 pr_msgs::RelaxHand::Response &res);
  bool ResetHand(pr_msgs::ResetHand::Request &req,
		 pr_msgs::ResetHand::Response &res);
  bool ResetHandQuick(pr_msgs::ResetHand::Request &req,
		 pr_msgs::ResetHand::Response &res);
  bool ResetFinger(pr_msgs::ResetFinger::Request &req,
		   pr_msgs::ResetFinger::Response &res);
  bool MoveHand(pr_msgs::MoveHand::Request &req,
		pr_msgs::MoveHand::Response &res);
  bool SetHandProperty(pr_msgs::SetHandProperty::Request &req,
		pr_msgs::SetHandProperty::Response &res);
  bool GetHandProperty(pr_msgs::GetHandProperty::Request &req,
		pr_msgs::GetHandProperty::Response &res);
  bool SetSpeed(pr_msgs::SetSpeed::Request &req,
		pr_msgs::SetSpeed::Response &res); 
  bool SetHandTorque(pr_msgs::SetHandTorque::Request &req,
		     pr_msgs::SetHandTorque::Response &res); 
private:
  void AdvertiseAndSubscribe(ros::NodeHandle &n);
  void GetParameters(ros::NodeHandle &n);
  void SetPuckValues();
  void Unadvertise();
  void createT(double a, double alpha, double d, double theta, double result[4][4]);

};
  


