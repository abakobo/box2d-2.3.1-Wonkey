
#Import "<box2d>"

'choose one of the files to import c++ asset source

#Import "cpp_from_rube/rubegoldberg.h"


Using std..
Using mojo..
Using box2d..

Extern

Function from_rube(m_world:b2World)
	
	Public
	
	
	Global w_width:=1000 'initial window size
	Global w_height:=700
	
	Class Box2DgfxTest Extends Window
		
		
		Field DDrawer:b2DebugDraw
		Field world:b2World
		Field down:b2Vec2
		Field shape_flag:=True
		
		'step values
		Field timeStep:= 0.01666666667
		Field velocityIterations := 6
		Field positionIterations := 2
		
		Field translate:=New Vec2f(204,446)
		Field zoom:=2.4
		
		
		
		Method New( title:String,width:Int,height:Int,flags:WindowFlags=WindowFlags.Resizable )
			
			
			Super.New( title,width,height,flags )
			
			'------- Initialising the world with its gravity
			down=New b2Vec2(0,-12) ' could be modified in some "from_rube" imports...
			world=New b2World(down)	 'extends void not garbage collected
			
			'--------calling assets from a rube c++ export
			
			from_rube(world)
			
			'----- debugdrawer init and link---------------------------------------------------------------------------------------------
			
			DDrawer=New b2DebugDraw(10.0,true) 'this one must be a field or a global, true for inverted y axis (designed in an editor with right handed coordinate system)
			DDrawer.SetWorld( world ) 'links the b2World instance and the b2DebugDraw instance
			DDrawer.SetFlags(e_shapeBit | e_jointBit)
			
		End
		
		Method OnRender( canvas:Canvas ) Override
			App.RequestRender()
			canvas.Clear(Color.Black)
			
			'// Instruct the world to perform a single step of simulation.
			'// It is generally best to keep the time step and iterations fixed.
			world.Stepp(timeStep, velocityIterations, positionIterations)
			
			
			canvas.PushMatrix()
			
			' moving the canvas a bit
			canvas.Translate(translate)
			canvas.Scale(zoom,zoom)
			
			' passing the canvas to the b2DebugDraw instance (DDrawer) asking for Draw
			DDrawer.Draw(canvas)
			
			canvas.PopMatrix()
			
			canvas.Color=Color.White
			canvas.DrawText("FPS:"+App.FPS+"    -- press space to hide/show shapes -- arrows to move -- E/D to zoom/unzoom ",15,15)
			
			
			
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
			If Keyboard.KeyDown(Key.Up) Then translate.y+=2
			If Keyboard.KeyDown(Key.Down) Then translate.y-=2
			If Keyboard.KeyDown(Key.Left) Then translate.x+=2
			If Keyboard.KeyDown(Key.Right) Then translate.x-=2
			If Keyboard.KeyDown(Key.E) Then zoom+=0.01
			If Keyboard.KeyDown(Key.D) Then zoom-=0.01
			
		End
	End
	
	Function Main()
		New AppInstance
		New Box2DgfxTest( "Box2D_test",w_width,w_height )
		App.Run()
	End
