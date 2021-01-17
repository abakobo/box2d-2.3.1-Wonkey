Namespace box2d

'#Import "<std>"
'#Import "<mojo>"
'#Import "../box2d.monkey2"
Using std..
Using mojo..
Using box2d..

Public


Class b2DebugDraw Extends b2Draw

	Protected
	Field y_axis_direction:=-1 'to invert y axis for screen draw (supposed to be 1 or -1 only)
	Field _canvas:Canvas
	Field _scalef:=10.0
	Field _scalev:Vec2f
	Field _world:b2World
	'Field e_shape:Bool,eaabb:Bool
	Public 
	
	Field pointSizeFactor:=1.0
	
	Method New(scl:Float,y_invert:Bool)
		
		_scalef=scl
		
		If y_invert=False Then y_axis_direction=1
		
		_scalev=New Vec2f(scl,y_axis_direction*scl)
	
	End
	
	Method SetWorld(w:b2World)
		_world=w
		_world.SetDebugDraw( Self  )
	End
	
	Method Draw( cnv:Canvas)
		_canvas=cnv
		_world.DrawDebugData()
	End
	
	Method SetCanvas(cnv:Canvas)
		_canvas=cnv
	End
	
	Method ToPhysicsLocation:b2Vec2(Location:Vec2f)

		Return Location/_scalev
		
	End
	
	Method FromPhysicsLocation:Vec2f(physLocation:b2Vec2)
		
		Return b2Vec2ToVec2f(physLocation)*_scalev
		
	End
	
	Method GetScaleFactor:Float()
		Return _scalef
	End
	
	Method GetScaleVector:Vec2f()
		Return _scalev
	End
	
	Method DrawCircle(center:b2Vec2,radius:Float,color:b2Color) Override
		'it's drawing a solid circle.... should be modified (does mojo have empty circle?) > won't do it because it's for chains and some joints only..

		Local c:=b2Vec2ToVec2f(center)*_scalev
		
		_canvas.Color = New Color(color.r,color.g,color.b)
		_canvas.DrawCircle(c.x,c.y,radius*_scalef)
		
	End
	Method DrawSolidCircle(center:b2Vec2,radius:Float,axis:b2Vec2,color:b2Color) Override
		
		Local c:=b2Vec2ToVec2f(center)*_scalev
		
		_canvas.Color = New Color(color.r,color.g,color.b)
		_canvas.DrawCircle(c.x,c.y,radius*_scalef)
		_canvas.Color = New Color(color.r/2.0,color.g/2.0,color.b/2.0)
		_canvas.DrawLine(c.x,c.y,c.x+axis.x*_scalef*radius,c.y+y_axis_direction*axis.y*_scalef*radius)

	End
	Method DrawPolygon(vertices:b2Vec2 Ptr, vertexCount:int, color:b2Color) Override

		_canvas.Color = New Color(color.r,color.g,color.b)
		
    		Local v:=New Float[vertexCount*2]
    		Local i:Int
    		Local l:=vertexCount-1
    		For i=0 To l
	    		Local p:=b2Vec2ToVec2f(vertices[i])*_scalev
    			v[i*2]=p.x
    			v[i*2+1]=p.y
    		Next
    		For i=1 To l
    			_canvas.DrawLine(v[(i-1)*2],v[(i-1)*2+1],v[i*2],v[i*2+1])
    		Next
    		i=l
    		_canvas.DrawLine(v[0],v[1],v[i*2],v[i*2+1])
	End
    Method DrawSolidPolygon(vertices:b2Vec2 Ptr, vertexCount:int, color:b2Color) Override
    
		_canvas.Color = New Color(color.r,color.g,color.b)
		
    	Local v:=New Float[vertexCount*2]
    		For Local i:=0 To vertexCount-1
	    		Local p:=b2Vec2ToVec2f(vertices[i])*_scalev
    			v[i*2]=p.x
    			v[i*2+1]=p.y
    		Next
    		_canvas.DrawPoly(v)
    End
    Method DrawSegment(p1:b2Vec2, p2:b2Vec2, color:b2Color) Override
	    
    	_canvas.Color = New Color(color.r,color.g,color.b)
    	
    	Local p1v:=b2Vec2ToVec2f(p1)*_scalev
		Local p2v:=b2Vec2ToVec2f(p2)*_scalev
		
    	_canvas.DrawLine(p1v.x,p1v.y,p2v.x,p2v.y)
    End
    Method DrawTransform(xf:b2Transform) Override
	    
	    'KESAKO?
	    
	    #Rem
		Local x:=(w/2.0)+(scale*(xf.p.x-viewpoint.x))
		Local y:=(h/2.0)+y_axis_direction*(scale*(xf.p.y-viewpoint.y))
		_canvas.Color = Color.Red
		_canvas.DrawCircle(x,y,0.08*scale)
		Local x2:=x+0.05*scale*xf.q.c
		Local y2:=y+0.05*scale*y_axis_direction*xf.q.s
		_canvas.Color = Color.Black
		_canvas.DrawLine(x,y,x2,y2)
		#end
		
    End
    Method DrawPoint(p:b2Vec2,size:Float,color:b2Color) Override
		Local pv:=b2Vec2ToVec2f(p)*_scalev
		_canvas.Color = New Color(color.r,color.g,color.b)
		_canvas.DrawCircle(pv.x,pv.y,size*pointSizeFactor/_scalef)
	End
End