/*
functions for monkey2 module wrapper
*/
#include <Box2D/Dynamics/Joints/b2DistanceJoint.h>
#include <Box2D/Dynamics/Joints/b2FrictionJoint.h>
#include <Box2D/Dynamics/Joints/b2GearJoint.h>
#include <Box2D/Dynamics/Joints/b2MotorJoint.h>
#include <Box2D/Dynamics/Joints/b2MouseJoint.h>
#include <Box2D/Dynamics/Joints/b2PrismaticJoint.h>
#include <Box2D/Dynamics/Joints/b2PulleyJoint.h>
#include <Box2D/Dynamics/Joints/b2RevoluteJoint.h>
#include <Box2D/Dynamics/Joints/b2RopeJoint.h>
#include <Box2D/Dynamics/Joints/b2WeldJoint.h>
#include <Box2D/Dynamics/Joints/b2WheelJoint.h>

#include <Box2D/Dynamics/b2Body.h>
#include <Box2D/Dynamics/b2TimeStep.h>


b2DistanceJoint* b2JointTob2DistanceJoint(b2Joint* jptr)
{
	b2DistanceJoint* ret;

	ret=(b2DistanceJoint*)jptr;

	return ret;
}

b2FrictionJoint* b2JointTob2FrictionJoint(b2Joint* jptr)
{
	b2FrictionJoint* ret;

	ret=(b2FrictionJoint*)jptr;

	return ret;
}

b2GearJoint* b2JointTob2GearJoint(b2Joint* jptr)
{
	b2GearJoint* ret;

	ret=(b2GearJoint*)jptr;

	return ret;
}

b2MotorJoint* b2JointTob2MotorJoint(b2Joint* jptr)
{
	b2MotorJoint* ret;

	ret=(b2MotorJoint*)jptr;

	return ret;
}

b2MouseJoint* b2JointTob2MouseJoint(b2Joint* jptr)
{
	b2MouseJoint* ret;

	ret=(b2MouseJoint*)jptr;

	return ret;
}

b2PrismaticJoint* b2JointTob2PrismaticJoint(b2Joint* jptr)
{
	b2PrismaticJoint* ret;

	ret=(b2PrismaticJoint*)jptr;

	return ret;
}

b2PulleyJoint* b2JointTob2PulleyJoint(b2Joint* jptr)
{
	b2PulleyJoint* ret;

	ret=(b2PulleyJoint*)jptr;

	return ret;
}

b2RevoluteJoint* b2JointTob2RevoluteJoint(b2Joint* jptr)
{
	b2RevoluteJoint* ret;

	ret=(b2RevoluteJoint*)jptr;

	return ret;
}

b2RopeJoint* b2JointTob2RopeJoint(b2Joint* jptr)
{
	b2RopeJoint* ret;

	ret=(b2RopeJoint*)jptr;

	return ret;
}

b2WeldJoint* b2JointTob2WeldJoint(b2Joint* jptr)
{
	b2WeldJoint* ret;

	ret=(b2WeldJoint*)jptr;

	return ret;
}

b2WheelJoint* b2JointTob2WheelJoint(b2Joint* jptr)
{
	b2WheelJoint* ret;

	ret=(b2WheelJoint*)jptr;

	return ret;
}