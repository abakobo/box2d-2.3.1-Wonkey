
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
	'Bodies  --------- bodies are set as field because you'll need them to connect your sprites to it
	Field body:b2Body
	Field body2:b2Body
	Field body3:b2Body
	'step values
	Field timeStep:= 0.01666666667
	Field velocityIterations := 6
	Field positionIterations := 2
	
	Method New( title:String,width:Int,height:Int,flags:WindowFlags=WindowFlags.Resizable )
		
		
		Super.New( title,width,height,flags )
		
		Local bd:b2BodyDef
		Local fd:b2FixtureDef
		
		
		'------- Initialising the world with its gravity
		down=New b2Vec2(0,-5)
		world=New b2World(down)
		'-------------------body 1	(the moving circle)
		bd.type = b2BodyType.b2_dynamicBody
		bd.position.Set(0.1, 5.1)
		bd.angle = 0.0
		
		body=world.CreateBody(Varptr bd)
		
		fd.friction = 2.0
		fd.restitution = 0.7
		fd.density = 1.0
		
		Local cshape:=New b2CircleShape()
		cshape.m_radius = 0.5
		cshape.m_p.Set(0.0, 0.0)
		
		fd.shape = cshape
		body.CreateFixture(Varptr fd)
		'---------------------body 2 (the other circle)
		bd.type = b2BodyType.b2_dynamicBody
		bd.position.Set(0.0, 0.0)
		bd.angle = 0.0
		
		body2=world.CreateBody(Varptr bd)
		
		fd.friction = 2.0
		fd.restitution = 0.7 '(bouncing)
		fd.density = 1.0
		
		cshape=New b2CircleShape()
		cshape.m_radius = 0.45
		cshape.m_p.Set(0.0, 0.0)
		
		fd.shape = cshape
		body2.CreateFixture(Varptr fd)
		'---------------------body 3 (ground)
		bd.type = b2BodyType.b2_staticBody
		bd.position.Set(-0.2, -5.2)
		bd.angle = 0.0
		body3=world.CreateBody(Varptr bd)
		
		fd.friction = 2.0
		fd.restitution = 0.7 '(little bouncing)
		fd.density = 1.0
		
		Local pshape:=New b2PolygonShape()
		Local vs:=New b2Vec2[4]
		vs[0].Set(5.0, -1.0)
		vs[1].Set(5.0, 1.0)
		vs[2].Set(-5.0, 1.0)
		vs[3].Set(-5.0, -1.0)
		pshape.Set(Varptr vs[0], 4)
		
		fd.shape = pshape
		body3.CreateFixture(Varptr fd)
		
		'----- debugdrawer init and link---------------------------------------------------------------------------------------------
		DDrawer=New b2DebugDraw(50,True) 'this one must be a field or a global , true for y axis invesion, scene in right handed coordinate system
		DDrawer.SetWorld( world ) 'links the b2World instance and the b2DebugDraw instance
		DDrawer.SetFlags( e_shapeBit ) 'you can chose what is rendered with these flags (joints,fixtures,..) see BodiesAndJoints banana for more

	End
	
	Method OnRender( canvas:Canvas ) Override
		App.RequestRender()
		canvas.Clear(Color.Black)
		
		'// Instruct the world to perform a single step of simulation.
		'// It is generally best to keep the time step and iterations fixed. ---> they have been set globally
		world.Stepp(timeStep, velocityIterations, positionIterations)
		
		'moving the canvas so it's centered on our physics object's location
		canvas.Translate(500,350)
		' passing the canvas to the b2DebugDraw instance (DDrawer) asking for Draw
		DDrawer.Draw(canvas)
		
	End
End

Function Main()
	New AppInstance
	New Box2DgfxTest( "Box2D_test",w_width,w_height )
	App.Run()
End
