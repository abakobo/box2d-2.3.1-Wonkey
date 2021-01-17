/*
functions for monkey2 module wrapper
*/

#ifndef MX2_SPECIFIC_H
#define MX2_SPECIFIC_H

#include <Box2D/Dynamics/Joints/b2Joint.h>

// joints extension casters
b2DistanceJoint* b2JointTob2DistanceJoint(b2Joint* jptr);
b2FrictionJoint* b2JointTob2FrictionJoint(b2Joint* jptr);
b2GearJoint* b2JointTob2GearJoint(b2Joint* jptr);
b2MotorJoint* b2JointTob2MotorJoint(b2Joint* jptr);
b2MouseJoint* b2JointTob2MouseJoint(b2Joint* jptr);
b2PrismaticJoint* b2JointTob2PrismaticJoint(b2Joint* jptr);
b2PulleyJoint* b2JointTob2PulleyJoint(b2Joint* jptr);
b2RevoluteJoint* b2JointTob2RevoluteJoint(b2Joint* jptr);
b2RopeJoint* b2JointTob2RopeJoint(b2Joint* jptr);
b2WeldJoint* b2JointTob2WeldJoint(b2Joint* jptr);
b2WheelJoint* b2JointTob2WheelJoint(b2Joint* jptr);

#endif