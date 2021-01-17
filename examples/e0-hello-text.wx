'
'
' a simple basic setup based on original box2d helloworld but with two more bodies and som colisions!
' you can see the colision moment while the angle is not 0 anymore...
' Local bodies should not be used in more complex apps, only in fields or globals... don't loose the scope of bodies, joints, world ....
'
' ----------------text only, you can compile this as console app--------------------------
#Import "<box2d>"
Using std..
Using mojo..
Using box2d..

Function Main()
	
	Print "monkey2 box2d text simple test"
	
	'------- Initialising the world with its gravity
	Local down:=New b2Vec2(0,-20)
	
	Local world:=New b2World(down)
	
	Local g:=world.GetGravity()
	'-------------------body 1	(the moving circle)
	Local bd:b2BodyDef
	
	bd.type = b2BodyType.b2_dynamicBody
	bd.position.Set(0.1, 1.1)
	bd.angle = 0.0
	
	Local body:b2Body
	body=world.CreateBody(bd)
	
	Local fd:b2FixtureDef
	fd.friction = 2.0
	fd.restitution = 0.0
	fd.density = 1.0
	
	Local shape:=New b2CircleShape()
	shape.m_radius = 0.5
	shape.m_p.Set(0.0, 0.0)
	
	fd.shape = shape
	body.CreateFixture(fd)
	
	
	'---------------------body 2 (the static one)
	Local bd2:b2BodyDef
	
	bd2.type = b2BodyType.b2_staticBody
	bd2.position.Set(0.0, 0.0)
	bd2.angle = 0.0
	
	Local body2:b2Body
	body2=world.CreateBody(bd2)
	
	Local fd2:b2FixtureDef
	fd2.friction = 2.0
	fd2.restitution = 0.8 '(bouncing)
	fd2.density = 1.0
	Local shape2:=New b2CircleShape()
	shape2.m_radius = 0.5
	shape2.m_p.Set(0.0, 0.0)
	fd2.shape = shape2
	body2.CreateFixture(fd2)
	'---------------------body 3 (dynamic polygon)
	Local bd3:b2BodyDef
	bd3.type = b2BodyType.b2_dynamicBody
	bd3.position.Set(0.0, 2.7)
	bd3.angle = 0.0
	Local body3:b2Body
	body3=world.CreateBody(bd3)
	Local fd3:b2FixtureDef
	fd3.friction = 2.0
	fd3.restitution = 0.3 '(little bouncing)
	fd3.density = 1.0
	Local shape3:=New b2PolygonShape()
	Local vs:=New b2Vec2[4]
	vs[0].Set(2.0, -1.0)
	vs[1].Set(2.0, 1.0)
	vs[2].Set(-1.0, 1.0)
	vs[3].Set(-1.0, -1.0)
	shape3.Set(vs.Data, 4)
	fd3.shape = shape3
	body3.CreateFixture(fd3)
	'--- Setting steps for simulation
	Local timeStep:= 0.01666666667
	Local velocityIterations := 6
	Local positionIterations := 2
	
	'// This is our little "game" loop.
	For Local i:=1 To 10
		'// Instruct the world to perform a single step of simulation.
		'// It is generally best to keep the time step and iterations fixed.
		world.Stepp(timeStep, velocityIterations, positionIterations)
		'// Now print the position and angle of the bodies.
		Local position := body.GetPosition()
		Local angle := body.GetAngle()
		Print("Step: "+i+"  Position Body1: "+position+" , angle: "+ angle)
		position = body3.GetPosition()
		angle = body3.GetAngle()
		Print("Step: "+i+"  Position Body3: "+position+" , angle: "+ angle)
	Next
End
