
#Import "<box2d>"


Using std..
Using mojo..
Using box2d..

Global w_width:=1000 'initial window size
Global w_height:=700

Class Box2DgfxTest Extends Window
	
	Field DDrawer:b2DebugDraw
	Field world:b2World
	Field down:b2Vec2
	
	Field shape_flag:=True
	
	'Bodies  --------- bodies are set as field because you'll need them to connect your sprites to it
	Field bodies:=New b2Body[22]
	Field body:b2Body,body2:b2Body
	Field joints:=New b2Joint[14]
	Field MouseJoint:b2MouseJoint
	Field bodyForMouseJoint:b2Body
	
	
	Field jdMouse: b2MouseJointDef
	'step values
	Field timeStep:= 0.01666666667
	Field velocityIterations := 6
	Field positionIterations := 2
	'camera settings
	Field translate:=New Vec2f(429,566)
	Field zoom:=2.4
	
	' trying to find if locals generates memory probs so I put some in Field section
	Field p:b2Vec2
	Field d:=New b2Vec2(0.001,0.001)
	Field aabb:b2AABB
	Field bodies4:b2Body
	Field callback:=New AABBQueryCallback()
	
	Method New( title:String,width:Int,height:Int,flags:WindowFlags=WindowFlags.Resizable )
		
		
		Super.New( title,width,height,flags )
		
		
		'Local jd:b2JointDef
		
		
		'------- Initialising the world with its gravity
		down=New b2Vec2(0,-20)
		world=New b2World(down)
		
		
		'----- debugdrawer init and link---------------------------------------------------------------------------------------------
		DDrawer=New b2DebugDraw(10.0,True) 'this one must be a field or a global
		DDrawer.SetWorld( world ) 'links the b2World instance and the b2DebugDraw instance
		DDrawer.SetFlags( e_shapeBit|e_jointBit )
		
		Init_b2Assets()
		
	End
	
	Method OnRender( canvas:Canvas ) Override
		App.RequestRender()
		canvas.Clear(Color.Black)
		
		'// Instruct the world to perform a single step of simulation.
		'// It is generally best to keep the time step and iterations fixed. ---> they have been set globally
		world.Stepp(timeStep, velocityIterations, positionIterations)
		
		canvas.PushMatrix()
		
		' moving the canvas a bit
		canvas.Translate(translate)
		canvas.Scale(zoom,zoom)
		'storing the position of the mouse in physics space (before popmatrix..)
		Local mousePhysicsLocation:=DDrawer.ToPhysicsLocation(-canvas.Matrix*Mouse.Location)
		
		' passing the canvas to the b2DebugDraw instance (DDrawer) asking for Draw
		DDrawer.Draw(canvas)
		
		canvas.PopMatrix()
		
		
		canvas.Color=Color.White
		canvas.DrawText("FPS:"+App.FPS+"    -- press space to hide/show shapes -- arrows to move -- Return to restart",15,15)
		canvas.DrawText("Mouse location in physWorld: "+mousePhysicsLocation,15,55)
		
		
		If Keyboard.KeyPressed(Key.Space)
			Print "Space"
			If shape_flag=True
				shape_flag=False
				DDrawer.ClearFlags(e_shapeBit)
				Elseif shape_flag=False
				shape_flag=True
				DDrawer.AppendFlags(e_shapeBit)
			Endif
		Endif
		If Keyboard.KeyDown(Key.Up) Then translate.y+=1
		If Keyboard.KeyDown(Key.Down) Then translate.y-=1
		If Keyboard.KeyDown(Key.Left) Then translate.x-=1
		If Keyboard.KeyDown(Key.Right) Then translate.x+=1
		
		If Keyboard.KeyPressed(Key.Enter)
			world.Destroy()
			world=New b2World(down)
			world.SetDebugDraw( DDrawer  )
			Init_b2Assets()
		End
		
		'The Mouse joint (using the custom AABBQueryCallback included in box2d.monkey2)
		If Mouse.ButtonPressed(MouseButton.Left)
			
			Local d:=New b2Vec2(0.001,0.001)
			Local aabb:b2AABB
			
			aabb.lowerBound=New b2Vec2(mousePhysicsLocation.x-d.x,mousePhysicsLocation.y-d.y) ' faudrait voir si y a moyen de moyenner les operateurs
			aabb.upperBound=New b2Vec2(mousePhysicsLocation.x+d.x,mousePhysicsLocation.y+d.y)
			
			callback.q_point=mousePhysicsLocation
			world.QueryAABB(callback,aabb)
			
			If (callback.q_fixture)
				bodyForMouseJoint=callback.q_fixture.GetBody()
				jdMouse.bodyA = bodies[20] 'this is a random static body, usualy "ground body" an empty body, but I chose to use a static one
				jdMouse.bodyB = bodyForMouseJoint
				jdMouse.collideConnected = False
				jdMouse.maxForce=100000.0*bodyForMouseJoint.GetMass()
				jdMouse.target=mousePhysicsLocation
				joints[13]= world.CreateJoint(jdMouse)
				bodyForMouseJoint.SetAwake(true)
			End
		End
		If Mouse.ButtonDown(MouseButton.Left)
			'b2JointTob2MouseJoint is a custom c++ Func needed because monkey2 can't use cast operator on "extend void". Is there a more elegant solution?
			If joints[13]<>Null Then b2JointTob2MouseJoint(joints[13]).SetTarget(mousePhysicsLocation)
		End
		If Mouse.ButtonReleased(MouseButton.Left)
			If joints[13]<>Null
				world.DestroyJoint(joints[13])
				joints[13] = Null
			End
		End
	End
	
	
	
	'------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	'
	'
	'
	'
	'
	'		ASSETS CREATION METHOD			this should find a place in another file or something because it's huge (or find a "code folding" editor)
	'
	'
	'
	'
	'
	'
	'
	'-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	Method Init_b2Assets()
		
		Local bd:b2BodyDef
		Local fd:b2FixtureDef
		
		Local shape:=New b2CircleShape()
		
		Local vs:b2Vec2[]
		
		'
		'---------------- this will create the bodies And the joints --------------------
		'
		
		
		bd.type = b2BodyType.b2_staticBody
		bd.position.Set(-9.616154670715332e+000, 1.456787490844727e+001)
		bd.angle = 0.000000000000000e+000
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[0] = world.CreateBody(  bd)
		
		
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		
		' Circle
		shape.m_radius = 5.000000000000000e-001
		shape.m_p.Set(0.000000000000000e+000, 0.000000000000000e+000)
		
		fd.shape = shape
		
		bodies[0].CreateFixture(  fd)
		
		
		
		
		bd.type = b2BodyType.b2_dynamicBody
		bd.position.Set(-1.134782123565674e+001, 1.317409420013428e+001)
		bd.angle = 0.000000000000000e+000
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[1] = world.CreateBody(  bd)
		
		
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		' Circle
		shape.m_radius = 5.000000000000000e-001
		shape.m_p.Set(0.000000000000000e+000, 0.000000000000000e+000)
		
		fd.shape = shape
		
		bodies[1].CreateFixture(  fd)
		
		
		
		
		bd.type = b2BodyType.b2_dynamicBody
		bd.position.Set(1.167067146301270e+001, 8.190274238586426e+000)
		bd.angle = 0.000000000000000e+000
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[2] = world.CreateBody(  bd)
		
		
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		' Circle
		shape.m_radius = 5.000000000000000e-001
		shape.m_p.Set(0.000000000000000e+000, 0.000000000000000e+000)
		
		fd.shape = shape
		
		bodies[2].CreateFixture(  fd)
		
		
		
		
		bd.type = b2BodyType.b2_dynamicBody
		bd.position.Set(-4.496450424194336e-001, 1.320893096923828e+001)
		bd.angle = 7.927382588386536e-001
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[3] = world.CreateBody(  bd)
		
		
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		' Circle
		shape.m_radius = 5.000000000000000e-001
		shape.m_p.Set(0.000000000000000e+000, 0.000000000000000e+000)
		
		fd.shape = shape
		
		bodies[3].CreateFixture(  fd)
		
		
		
		
		bd.type = b2BodyType.b2_dynamicBody
		bd.position.Set(-7.866811752319336e-001, 1.241996955871582e+001)
		bd.angle = 7.927382588386536e-001
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[4] = world.CreateBody(  bd)
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		' Circle
		shape.m_radius = 5.000000000000000e-001
		shape.m_p.Set(0.000000000000000e+000, 0.000000000000000e+000)
		
		fd.shape = shape
		
		bodies[4].CreateFixture(  fd)
		
		bd.type = b2BodyType.b2_dynamicBody
		bd.position.Set(-8.876290321350098e+000, 1.462949991226196e+000)
		bd.angle = 0.000000000000000e+000
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[5] = world.CreateBody(  bd)
		
		
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		' Circle
		shape.m_radius = 5.000000000000000e-001
		shape.m_p.Set(0.000000000000000e+000, 0.000000000000000e+000)
		
		fd.shape = shape
		
		bodies[5].CreateFixture(  fd)
		
		
		
		
		bd.type = b2BodyType.b2_dynamicBody
		bd.position.Set(-9.484384536743164e+000, 4.662723541259766e+000)
		bd.angle = 0.000000000000000e+000
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[6] = world.CreateBody(  bd)
		
		
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		' Circle
		shape.m_radius = 5.000000000000000e-001
		shape.m_p.Set(0.000000000000000e+000, 0.000000000000000e+000)
		
		fd.shape = shape
		
		bodies[6].CreateFixture(  fd)
		
		
		
		
		bd.type = b2BodyType.b2_dynamicBody
		bd.position.Set(-1.135251617431641e+001, 5.738314151763916e+000)
		bd.angle = 0.000000000000000e+000
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[7] = world.CreateBody(  bd)
		
		
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		' Circle
		shape.m_radius = 5.000000000000000e-001
		shape.m_p.Set(0.000000000000000e+000, 0.000000000000000e+000)
		
		fd.shape = shape
		
		bodies[7].CreateFixture(  fd)
		
		
		
		
		bd.type = b2BodyType.b2_dynamicBody
		bd.position.Set(-1.027393913269043e+001, 5.378858089447021e+000)
		bd.angle = 1.029948234558105e+000
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[8] = world.CreateBody(  bd)
		
		
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		Local polyshap:=New b2PolygonShape
		vs=New b2Vec2[8]
		vs[0].Set(3.741489648818970e-001, -1.498831033706665e+000)
		vs[1].Set(3.741487264633179e-001, 1.498829722404480e+000)
		vs[2].Set(-3.741488754749298e-001, 1.498829960823059e+000)
		vs[3].Set(-3.741490542888641e-001, -1.498831033706665e+000)
		polyshap.Set(vs)
		
		fd.shape = polyshap
		
		bodies[8].CreateFixture(  fd)
		
		bd.type = b2BodyType.b2_staticBody
		bd.position.Set(-1.065488815307617e+001, 4.144279956817627e+000)
		bd.angle = 0.000000000000000e+000
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[9] = world.CreateBody(  bd)
		
		
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		Local chainshap:=New b2ChainShape
		vs=New b2Vec2[6]
		vs[0].Set(-1.908466339111328e+000, 1.365785479545593e+000)
		vs[1].Set(3.132839202880859e+000, -1.920635461807251e+000)
		vs[2].Set(5.900391578674316e+000, -2.560847759246826e+000)
		vs[3].Set(1.397098731994629e+001, -3.195631980895996e+000)
		vs[4].Set(1.657426071166992e+001, -3.339456081390381e+000)
		vs[5].Set(2.400282669067383e+001, 5.967795848846436e-001)
		chainshap.CreateChain( vs)
		
		
		fd.shape = chainshap
		
		bodies[9].CreateFixture(  fd)
		
		
		
		
		bd.type = b2BodyType.b2_dynamicBody
		bd.position.Set(6.471252918243408e+000, 9.019099235534668e+000)
		bd.angle = 0.000000000000000e+000
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[10] = world.CreateBody(  bd)
		
		
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		' Circle
		shape.m_radius = 6.237711310386658e-001
		shape.m_p.Set(0.000000000000000e+000, 0.000000000000000e+000)
		
		fd.shape = shape
		
		bodies[10].CreateFixture(  fd)
		
		
		
		
		bd.type = b2BodyType.b2_staticBody
		bd.position.Set(3.658845424652100e+000, 9.834465980529785e+000)
		bd.angle = 0.000000000000000e+000
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[11] = world.CreateBody(  bd)
		
		
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		' Circle
		shape.m_radius = 5.000000000000000e-001
		shape.m_p.Set(0.000000000000000e+000, 0.000000000000000e+000)
		
		fd.shape = shape
		
		bodies[11].CreateFixture(  fd)
		
		
		
		
		bd.type = b2BodyType.b2_dynamicBody
		bd.position.Set(8.153550624847412e-001, 9.800964355468750e+000)
		bd.angle = 0.000000000000000e+000
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[12] = world.CreateBody(  bd)
		
		
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		' Circle
		shape.m_radius = 5.000000000000000e-001
		shape.m_p.Set(0.000000000000000e+000, 0.000000000000000e+000)
		
		fd.shape = shape
		
		bodies[12].CreateFixture(  fd)
		
		
		
		
		bd.type = b2BodyType.b2_dynamicBody
		bd.position.Set(-2.424489974975586e+000, 8.783659934997559e+000)
		bd.angle = 0.000000000000000e+000
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[13] = world.CreateBody(  bd)
		
		
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		' Circle
		shape.m_radius = 2.180390059947968e-001
		shape.m_p.Set(0.000000000000000e+000, 0.000000000000000e+000)
		
		fd.shape = shape
		
		bodies[13].CreateFixture(  fd)
		
		
		
		
		bd.type = b2BodyType.b2_staticBody
		bd.position.Set(4.553846642374992e-002, 9.778861999511719e+000)
		bd.angle = 0.000000000000000e+000
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[14] = world.CreateBody(  bd)
		
		
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		' Circle
		shape.m_radius = 5.000000000000000e-001
		shape.m_p.Set(0.000000000000000e+000, 0.000000000000000e+000)
		
		fd.shape = shape
		
		bodies[14].CreateFixture(  fd)
		
		
		'-------------------------------------------------------------------
		'
		'
		'
		'
		'						THE JOINTS
		'
		'
		'
		'
		'
		
		
		Local jdFr:b2FrictionJointDef
		jdFr.bodyA = bodies[0]
		jdFr.bodyB = bodies[1]
		jdFr.collideConnected = False
		jdFr.localAnchorA.Set(-8.869510293006897e-001, -5.068290233612061e-001)
		jdFr.localAnchorB.Set(8.447149991989136e-001, 8.869510293006897e-001)
		jdFr.maxForce = 16.0000000000000e+000
		jdFr.maxTorque = 0.200000000000000e-001
		joints[0] = world.CreateJoint(  jdFr)
		
		
		
		
		Local jdMo:b2MotorJointDef
		jdMo.bodyA = bodies[9]
		jdMo.bodyB = bodies[2]
		jdMo.collideConnected = True
		jdMo.linearOffset.Set(2.552124214172363e+001, 7.285740852355957e+000)
		jdMo.angularOffset = 8.726646304130554e-001
		jdMo.maxForce = 3.8000000000000e+001
		jdMo.maxTorque = 5.000000000000000e+000
		jdMo.correctionFactor = 2.000000029802322e-001
		joints[1] = world.CreateJoint(  jdMo)
		
		
		
		Local jdWe:b2WeldJointDef
		jdWe.bodyA = bodies[3]
		jdWe.bodyB = bodies[4]
		jdWe.collideConnected = False
		jdWe.localAnchorA.Set(-3.707439899444580e-001, -1.425939947366714e-001)
		jdWe.localAnchorB.Set(4.277809858322144e-001, 1.711129993200302e-001)
		jdWe.referenceAngle = 0.000000000000000e+000
		jdWe.frequencyHz = 0.000000000000000e+000
		jdWe.dampingRatio = 0.000000000000000e+000
		joints[2] = world.CreateJoint(  jdWe)
		
		
		Local jdPr:b2PrismaticJointDef
		jdPr.bodyA = bodies[9]
		jdPr.bodyB = bodies[5]
		jdPr.collideConnected = False
		jdPr.localAnchorA.Set(1.778599977493286e+000, -2.681329965591431e+000)
		jdPr.localAnchorB.Set(0.000000000000000e+000, 0.000000000000000e+000)
		jdPr.localAxisA.Set(9.394776821136475e-001, -3.426101207733154e-001)
		jdPr.referenceAngle = 0.000000000000000e+000
		jdPr.enableLimit = True
		jdPr.lowerTranslation = -9.900412559509277e-001
		jdPr.upperTranslation = 3.963107824325562e+000
		jdPr.enableMotor = False
		jdPr.motorSpeed = 0.000000000000000e+000
		jdPr.maxMotorForce = 0.000000000000000e+000
		joints[3] = world.CreateJoint(  jdPr)
		
		
		Local jdRp:b2RopeJointDef
		jdRp.bodyA = bodies[10]
		jdRp.bodyB = bodies[11]
		jdRp.collideConnected = False
		jdRp.localAnchorA.Set(4.768371582031250e-007, 9.536743164062500e-007)
		jdRp.localAnchorB.Set(0.000000000000000e+000, 0.000000000000000e+000)
		jdRp.maxLength = 3.272022008895874e+000
		joints[4] = world.CreateJoint(  jdRp)
		
		
		Local jdRe:b2RevoluteJointDef
		jdRe.bodyA = bodies[12]
		jdRe.bodyB = bodies[14]
		jdRe.collideConnected = False
		jdRe.localAnchorA.Set(-3.663310110569000e-001, -2.026459947228432e-002)
		jdRe.localAnchorB.Set(4.034860134124756e-001, 1.837729942053556e-003)
		jdRe.referenceAngle = 0.000000000000000e+000
		jdRe.enableLimit = False
		jdRe.lowerAngle = 0.000000000000000e+000
		jdRe.upperAngle = 0.000000000000000e+000
		jdRe.enableMotor = False
		jdRe.motorSpeed = 0.000000000000000e+000
		jdRe.maxMotorTorque = 0.000000000000000e+000
		joints[5] = world.CreateJoint(  jdRe)
		
		
		Local jdWh:b2WheelJointDef
		jdWh.bodyA = bodies[8]
		jdWh.bodyB = bodies[7]
		jdWh.collideConnected = False
		jdWh.localAnchorA.Set(-2.471680045127869e-001, 1.109699964523315e+000)
		jdWh.localAnchorB.Set(0.000000000000000e+000, 0.000000000000000e+000)
		jdWh.localAxisA.Set(9.980227351188660e-001, -6.285411864519119e-002)
		jdWh.enableMotor = False
		jdWh.motorSpeed = 0.000000000000000e+000
		jdWh.maxMotorTorque = 0.000000000000000e+000
		jdWh.frequencyHz = 4.000000000000000e+000
		jdWh.dampingRatio = 6.999999880790710e-001
		joints[6] = world.CreateJoint(  jdWh)
		
		
		
		jdWh.bodyA = bodies[8]
		jdWh.bodyB = bodies[6]
		jdWh.collideConnected = False
		jdWh.localAnchorA.Set(-2.074099928140640e-001, -1.045570015907288e+000)
		jdWh.localAnchorB.Set(0.000000000000000e+000, 0.000000000000000e+000)
		jdWh.localAxisA.Set(-9.999493360519409e-001, 1.006569992750883e-002)
		jdWh.enableMotor = False
		jdWh.motorSpeed = 0.000000000000000e+000
		jdWh.maxMotorTorque = 0.000000000000000e+000
		jdWh.frequencyHz = 5.000000000000000e+000
		jdWh.dampingRatio = 6.999999880790710e-001
		joints[7] = world.CreateJoint(  jdWh)
		
		
		Local jdDi:b2DistanceJointDef
		jdDi.bodyA = bodies[14]
		jdDi.bodyB = bodies[13]
		jdDi.collideConnected = False
		jdDi.localAnchorA.Set(0.000000000000000e+000, 0.000000000000000e+000)
		jdDi.localAnchorB.Set(0.000000000000000e+000, 0.000000000000000e+000)
		jdDi.length = 2.662980079650879e+000
		jdDi.frequencyHz = 0.000000000000000e+000
		jdDi.dampingRatio = 0.000000000000000e+000
		joints[8] = world.CreateJoint(  jdDi)
		
		
		'
		'   pulley joint
		'
		
		bd.type = b2BodyType.b2_dynamicBody
		bd.position.Set(11, 16)
		bd.angle = 0.000000000000000e+000
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[15] = world.CreateBody(  bd)
		
		
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		' Circle
		shape.m_radius = 5.000000000000000e-001
		shape.m_p.Set(0.000000000000000e+000, 0.000000000000000e+000)
		
		fd.shape = shape
		
		bodies[15].CreateFixture(  fd)
		
		bd.type = b2BodyType.b2_dynamicBody
		bd.position.Set(9, 16)
		bd.angle = 0.000000000000000e+000
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[16] = world.CreateBody(  bd)
		
		
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		' Circle
		shape.m_radius = 6.40000000000000e-001
		shape.m_p.Set(0.000000000000000e+000, 0.000000000000000e+000)
		
		fd.shape = shape
		
		bodies[16].CreateFixture(  fd)
		
		' an edge to avoid zero length pulley
		
		bd.type = b2BodyType.b2_staticBody
		bd.position.Set(11, 18.9)
		bd.angle = 0.000000000000000e+000
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[17] = world.CreateBody(  bd)
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		' edge
		Local edgshap:=New b2EdgeShape
		Local vedg1:=New b2Vec2(-1.5,0)
		Local vedg2:=New b2Vec2(1.5,0)
		edgshap.Set(vedg1,vedg2)
		
		fd.shape = edgshap
		
		bodies[17].CreateFixture(  fd)
		
		
		
		
		' the pulley joint itself
		Local anchor1 := bodies[15].GetWorldCenter()
		Local anchor2 := bodies[16].GetWorldCenter()
		Local groundAnchor1:=New b2Vec2(anchor1.x, anchor1.y + 3.0)
		Local groundAnchor2:=New b2Vec2(anchor2.x, anchor2.y + 3.0)
		Local ratio := 1.5
		Local jdPu:b2PulleyJointDef
		Local bodA:=bodies[15]
		Local bodB:=bodies[16]
		jdPu.Initialize(bodA,  bodB,  groundAnchor1, groundAnchor2, anchor1, anchor2, ratio)
		
		joints[9] = world.CreateJoint(  jdPu)
		
		'
		' GearJoint
		'
		
		bd.type = b2BodyType.b2_staticBody
		bd.position.Set(5, 15)
		bd.angle = 0.000000000000000e+000
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[18] = world.CreateBody(  bd)
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		' edge
		'Local edgshap:=New b2EdgeShape
		vedg1=New b2Vec2(-1.5,0)
		vedg2=New b2Vec2(1.5,0)
		edgshap.Set(vedg1,vedg2)
		
		fd.shape = edgshap
		
		bodies[18].CreateFixture(  fd)
		
		bd.type = b2BodyType.b2_dynamicBody
		bd.position.Set(5, 15)
		bd.angle = 0.000000000000000e+000
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 3.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[19] = world.CreateBody(  bd)
		
		
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		' Circle
		shape.m_radius = 5.000000000000000e-001
		shape.m_p.Set(0.000000000000000e+000, 0.000000000000000e+000)
		
		fd.shape = shape
		
		bodies[19].CreateFixture(  fd)
		'
		' a second revolute joint cause gear is 2 rev or 1 rev 1 prismatic
		'
		'b2RevoluteJointDef jointDef;
		'jointDef.Initialize(myBodyA, myBodyB, myBodyA->GetWorldCenter());
		jdRe.Initialize(bodies[18],bodies[19],bodies[19].GetWorldCenter())
		
		joints[10] = world.CreateJoint(  jdRe)
		
		
		bd.type = b2BodyType.b2_staticBody
		bd.position.Set(1, 14)
		bd.angle = 0.000000000000000e+000
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[20] = world.CreateBody(  bd)
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		' edge
		'Local edgshap:=New b2EdgeShape
		vedg1=New b2Vec2(-1.5,0)
		vedg2=New b2Vec2(1.5,0)
		edgshap.Set(vedg1,vedg2)
		
		fd.shape = edgshap
		
		bodies[20].CreateFixture(  fd)
		
		bd.type = b2BodyType.b2_dynamicBody
		bd.position.Set(1, 14)
		bd.angle = 0.000000000000000e+000
		bd.linearVelocity.Set(0.000000000000000e+000, 0.000000000000000e+000)
		bd.angularVelocity = 0.000000000000000e+000
		bd.linearDamping = 0.000000000000000e+000
		bd.angularDamping = 0.000000000000000e+000
		bd.allowSleep = True
		bd.awake = True
		bd.fixedRotation = False
		bd.bullet = False
		bd.active = True
		bd.gravityScale = 1.000000000000000e+000
		bodies[21] = world.CreateBody(  bd)
		
		
		
		fd.friction = 2.000000029802322e-001
		fd.restitution = 0.000000000000000e+000
		fd.density = 1.000000000000000e+000
		fd.isSensor = False
		'fd.filter.categoryBits = uint16(1)
		'fd.filter.maskBits = uint16(65535)
		'fd.filter.groupIndex = int16(0)
		' Circle
		shape.m_radius = 5.000000000000000e-001
		shape.m_p.Set(0.000000000000000e+000, 0.000000000000000e+000)
		
		fd.shape = shape
		
		bodies[21].CreateFixture(  fd)
		'
		' a second revolute joint cause gear needs 2 rev or 1 rev 1 prismatic
		'
		'b2RevoluteJointDef jointDef;
		'jointDef.Initialize(myBodyA, myBodyB, myBodyA->GetWorldCenter());
		jdRe.Initialize(bodies[20],bodies[21],bodies[21].GetWorldCenter())
		
		joints[11] = world.CreateJoint(  jdRe)
		
		'
		' the gearjoint itself
		'
		
		Local jdGe:b2GearJointDef
		jdGe.bodyA = bodies[19]
		jdGe.bodyB = bodies[21]
		jdGe.joint1 = joints[10]
		jdGe.joint2 = joints[11]
		jdGe.ratio = 1.0
		
		joints[12] = world.CreateJoint(  jdGe)
		
		
		
		
		' nullyfy the mouseJoint to avoid bugs
		
		joints[13]=Null
		
	End
End

Class AABBQueryCallback Extends b2QueryCallback
	Field q_point:b2Vec2
	Field q_fixture:b2Fixture
	Method New()
		q_point.x=0
		q_point.y=0
		q_fixture=NULL
	End
	Method New(point:b2Vec2)
		q_point=point
		q_fixture=NULL
	End
	Method ReportFixture:Bool(fixture:b2Fixture) Override
		Local body:=fixture.GetBody()
		If (body.GetType()=b2BodyType.b2_dynamicBody)
			Local inside:=fixture.TestPoint(q_point)
			If inside
				q_fixture=fixture
				Return False
			End
		End
		
		Return True
	End
End

Function Main()
	New AppInstance
	New Box2DgfxTest( "Box2D_test",w_width,w_height )
	App.Run()
End
