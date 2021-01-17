'
'  stress test - note that this is a graphic stress test,
'  so graphics are stessing the cpu too!, box2d with no should be noticabely faster!
'
'

#Import "<box2d>"

Using std..
Using mojo..
Using box2d..

Global w_width:=1000 'initial window size
Global w_height:=700


Class Box2DgfxTest Extends Window
	
	Field drawPhys:Bool=True 'to compare speed with/without debugdraw
	
	Field DDrawer:b2DebugDraw
	Field world:b2World
	Field down:=New b2Vec2(0,10)
	Field physicsScale:=10.0
	
	Field shape_flag:=True
	
	'Bodies  --------- bodies are set as field because you'll need them to connect your sprites to it
	Field bodies:=New b2Body[1600]
	Field pen_bodies:=New b2Body[700]
	Field body:b2Body,body2:b2Body
	Field joints:=New b2Joint[14]
	
	Field MouseJoint:b2Joint
	Field bodyForMouseJoint:b2Body
	
	Field jdMouse: b2MouseJointDef
	'step values
	Field timeStep:= 0.01666666667
	Field velocityIterations := 6
	Field positionIterations := 2
	
	'translate and zoom of the camera
	Field translate:=New Vec2f(660,940)
	Field zoom:=0.4
	
	Field callback:=New AABBQueryCallback ()
	
	
	
	
	Method New( title:String,width:Int,height:Int,flags:WindowFlags=WindowFlags.Resizable )
		
		Super.New( title,width,height,flags )
		
		'------- Initialising the world with its gravity
		world=New b2World(down)
		
		'----- debugdrawer init and link---------------------------------------------------------------------------------------------
		DDrawer=New b2DebugDraw(physicsScale,False) 'this one must be a field or a global , false for non inverted y axis
		DDrawer.SetWorld( world ) 'links the b2World instance and the b2DebugDraw instance
		DDrawer.SetFlags( e_shapeBit|e_jointBit )
		Init_b2Assets()
		
	End
	
	Method OnRender( canvas:Canvas ) Override
		App.RequestRender()
		canvas.Clear(Color.Black)
		
		'// Instruct the world to perform a single step of simulation.
		'// It is generally best to keep the time step and iterations fixed. ---> they have been set globally
		Local dt:=Microsecs()
		world.Stepp(timeStep, velocityIterations, positionIterations)
		dt=Microsecs()-dt
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
		canvas.DrawText("Mouse location in physWorld: "+mousePhysicsLocation+" phys render time: "+dt+"µs",15,55)
		canvas.DrawText("Phys FPS "+1000000/dt,15,85)
		
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
				MouseJoint= world.CreateJoint( jdMouse)
				bodyForMouseJoint.SetAwake(true)
			End
		End
		If Mouse.ButtonDown(MouseButton.Left)
			'b2JointTob2MouseJoint is a custom c++ Func needed because monkey2 can't use cast operator on "extend void". Is there a more elegant solution?
			If MouseJoint<>Null Then b2JointTob2MouseJoint(MouseJoint).SetTarget(mousePhysicsLocation)
		End
		If Mouse.ButtonReleased(MouseButton.Left)
			If MouseJoint<>Null
				world.DestroyJoint(MouseJoint)
				MouseJoint = Null
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
		
		
		For Local i:=0 To 50
			For Local j:=0 To 30
				bd.type = b2BodyType.b2_dynamicBody
				bd.position.Set( -90+i*2.2+j*0.2,-150+j*2.2)
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
				bodies[i+j*51] = world.CreateBody( bd)
				
				
				
				fd.friction = 0.1
				fd.restitution = 0.000000000000000e+000
				fd.density = 1.0
				fd.isSensor = False
				
				shape.m_radius = 1.0
				shape.m_p.Set(0.000000000000000e+000, 0.000000000000000e+000)
				
				fd.shape = shape
				
				bodies[i+j*51].CreateFixture( fd)
				
			Next
		Next
		
		
		
		
		
		Local polyshap:=New b2PolygonShape
		vs=New b2Vec2[5]
		
		for Local it:=0 To 4
			Local angle:Float
			angle = -2.0*Pi*it/(1.0*5)
			vs[it].Set(3*Cos(angle), 3*Sin(angle))
		Next
		
		polyshap.Set( vs)
		
		
		
		
		For Local i:=0 To 19
			For Local j:=0 To 9
				bd.type = b2BodyType.b2_dynamicBody
				bd.position.Set(-100.0+i*6.5, -220.0+j*6.5)
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
				pen_bodies[i+j*20] = world.CreateBody( bd)
				
				
				
				fd.friction = 0.1
				fd.restitution = 0.000000000000000e+000
				fd.density = 1.000000000000000e+000
				fd.isSensor = False
				
				
				fd.shape = polyshap
				
				pen_bodies[i+j*20].CreateFixture( fd)
			Next
		Next
		
		bd.type = b2BodyType.b2_staticBody
		bd.position.Set(0, -70)
		bd.angle = 0.0
		bodies[1599]=world.CreateBody( bd)
		
		fd.friction = 2.0
		fd.restitution = 0.7 '(little bouncing)
		fd.density = 1.0
		
		Local pshape:=New b2PolygonShape()
		
		vs[0].Set(100.0, -1.0)
		vs[1].Set(100.0, 1.0)
		vs[2].Set(-200.0, 1.0)
		vs[3].Set(-200.0, -1.0)
		pshape.Set( vs)
		
		fd.shape = pshape
		bodies[1599].CreateFixture( fd)
		
		
	End
End 'class

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
