Namespace box2d

Extern

Function b2JointTob2DistanceJoint:b2DistanceJoint(jptr:b2Joint)
Function b2JointTob2FrictionJoint:b2FrictionJoint(jptr:b2Joint)
Function b2JointTob2GearJoint:b2GearJoint(jptr:b2Joint)
Function b2JointTob2MotorJoint:b2MotorJoint(jptr:b2Joint)
Function b2JointTob2MouseJoint:b2MouseJoint(jptr:b2Joint)
Function b2JointTob2PrismaticJoint:b2PrismaticJoint(jptr:b2Joint)
Function b2JointTob2PulleyJoint:b2PulleyJoint(jptr:b2Joint)
Function b2JointTob2RevoluteJoint:b2RevoluteJoint(jptr:b2Joint)
Function b2JointTob2RopeJoint:b2RopeJoint(jptr:b2Joint)
Function b2JointTob2WeldJoint:b2WeldJoint(jptr:b2Joint)
Function b2JointTob2WheelJoint:b2WheelJoint(jptr:b2Joint)
	

Public

Class b2Joint Extension
	
	Method ToDistance:b2DistanceJoint()
		Local ret:b2DistanceJoint
		If Self.GetType()=b2JointType.e_distanceJoint
			ret=b2JointTob2DistanceJoint(Self)
		Else
			#If __DEBUG__
				Assert (False, "To:b2DistanceJoint() error: wrong joint return type, returning Null!!!!!!!")
			#End
			ret=Null
		End
		Return ret
	End
	Operator To:b2DistanceJoint()
		Return Self.ToDistance()
	End
	'------------------------------------
	Method ToFriction:b2FrictionJoint()
		Local ret:b2FrictionJoint
		If Self.GetType()=b2JointType.e_frictionJoint
			ret=b2JointTob2FrictionJoint(Self)
		Else
			#If __DEBUG__
				Assert (False, "To:b2FrictionJoint() error: wrong joint return type, returning Null!!!!!!!")
			#End
			ret=Null
		End
		Return ret
	End
	Operator To:b2FrictionJoint()
		Return Self.ToFriction()
	End
	'----------------------------------
	Method ToGear:b2GearJoint()
		Local ret:b2GearJoint
		If Self.GetType()=b2JointType.e_gearJoint
			ret=b2JointTob2GearJoint(Self)
		Else
			#If __DEBUG__
				Assert (False, "To:b2GearJoint() error: wrong joint return type, returning Null!!!!!!!")
			#End
			ret=Null
		End
		Return ret
	End
	Operator To:b2GearJoint()
		Return Self.ToGear()
	End
	'---------------------------------
	Method ToMotor:b2MotorJoint()
		Local ret:b2MotorJoint
		If Self.GetType()=b2JointType.e_motorJoint
			ret=b2JointTob2MotorJoint(Self)
		Else
			#If __DEBUG__
				Assert (False, "To:b2MotorJoint() error: wrong joint return type, returning Null!!!!!!!")
			#End
			ret=Null
		End
		Return ret
	End
	Operator To:b2MotorJoint()
		Return Self.ToMotor()
	End
	'------------------------------------------
	Method ToMouse:b2MouseJoint()
		Local ret:b2MouseJoint
		If Self.GetType()=b2JointType.e_mouseJoint
			ret=b2JointTob2MouseJoint(Self)
		Else
			#If __DEBUG__
				Assert (False, "To:b2MouseJoint() error: wrong joint return type, returning Null!!!!!!!")
			#End
			ret=Null
		End
		Return ret
	End
	Operator To:b2MouseJoint()
		Return Self.ToMouse()
	End
	'------------------------------------------
	Method ToPrismatic:b2PrismaticJoint()
		Local ret:b2PrismaticJoint
		If Self.GetType()=b2JointType.e_prismaticJoint
			ret=b2JointTob2PrismaticJoint(Self)
		Else
			#If __DEBUG__
				Assert (False, "To:b2PrismaticJoint() error: wrong joint return type, returning Null!!!!!!!")
			#End
			ret=Null
		End
		Return ret
	End
	Operator To:b2PrismaticJoint()
		Return Self.ToPrismatic()
	End
	'------------------------------------------
	Method ToPulley:b2PulleyJoint()
		Local ret:b2PulleyJoint
		If Self.GetType()=b2JointType.e_pulleyJoint
			ret=b2JointTob2PulleyJoint(Self)
		Else
			#If __DEBUG__
				Assert (False, "To:b2PulleyJoint() error: wrong joint return type, returning Null!!!!!!!")
			#End
			ret=Null
		End
		Return ret
	End
	Operator To:b2PulleyJoint()
		Return Self.ToPulley()
	End
	'------------------------------------------
	Method ToRevolute:b2RevoluteJoint()
		Local ret:b2RevoluteJoint
		If Self.GetType()=b2JointType.e_revoluteJoint
			ret=b2JointTob2RevoluteJoint(Self)
		Else
			#If __DEBUG__
				Assert (False, "To:b2RevoluteJoint() error: wrong joint return type, returning Null!!!!!!!")
			#End
			ret=Null
		End
		Return ret
	End
	Operator To:b2RevoluteJoint()
		Return Self.ToRevolute()
	End
	'------------------------------------------
	Method ToRope:b2RopeJoint()
		Local ret:b2RopeJoint
		If Self.GetType()=b2JointType.e_ropeJoint
			ret=b2JointTob2RopeJoint(Self)
		Else
			#If __DEBUG__
				Assert (False, "To:b2RopeJoint() error: wrong joint return type, returning Null!!!!!!!")
			#End
			ret=Null
		End
		Return ret
	End
	Operator To:b2RopeJoint()
		Return Self.ToRope()
	End
	'------------------------------------------
	Method ToWeld:b2WeldJoint()
		Local ret:b2WeldJoint
		If Self.GetType()=b2JointType.e_weldJoint
			ret=b2JointTob2WeldJoint(Self)
		Else
			#If __DEBUG__
				Assert (False, "To:b2WeldJoint() error: wrong joint return type, returning Null!!!!!!!")
			#End
			ret=Null
		End
		Return ret
	End
	Operator To:b2WeldJoint()
		Return Self.ToWeld()
	End
	'----------------------------------------
	Method ToWheel:b2WheelJoint()
		Local ret:b2WheelJoint
		If Self.GetType()=b2JointType.e_wheelJoint
			ret=b2JointTob2WheelJoint(Self)
		Else
			#If __DEBUG__
				Assert (False, "To:b2WheelJoint() error: wrong joint return type, returning Null!!!!!!!")
			#End
			ret=Null
		End
		Return ret
	End
	Operator To:b2WheelJoint()
		Return Self.ToWheel()
	End
	
End