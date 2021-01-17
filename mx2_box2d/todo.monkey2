tester destroyjoint avec différents joints et avec/sans Varptr

v-faire Extension anti-varptr pour tous les shapes.Set (que b2polygonshape pour le moment) (faire chainshape.CreateLoop p.ex)

créer resource Extends pour gérer les call backs?

créer Getter/Setter en utilisant bbArray pour les fields avec 'need-bbArray getter/setter-> en commentaire

x-checker que y a pas de m_blah qui sont utiles car ils sont tous désactivés! Si ils sont utilisés!

checker que Double dans b2vec2 extensions fait pas ralentir->mieux d'être en float pour tout le monde le même

fixture getAABB pour prob de non ref based Var avec & (voir box2d.monkey2)

bouger box2d.monkey dans mx2_box2d

conversion char > Short pour externals?

mieux comprendre enums

v-b2Vec2 Operator + - et ...? pas poss pour le moment -> si, done

b2 contact id union (dans l'oigon?)

b2ContactCreateFcn + b2ContactDestroyFcn 'typedef aliasses

b2ContactPositionConstraint semble être défini dans .cpp!

autres callbacks

function pour convertir b2Joint en b2Joint**** + déplacer celle de mouse dans box2d.monkey2 et dans le .h .cpp
	
b2fixture.gettype mal traduit (commenté)

Function b2Log(string:char Ptr,...:..)
	
Field data:Byte Ptr 'was char ptr need char_t?

checker Global fn avec generics
	
	
	------------------------------------------------------
	checker que ça marche avec generics et pointers
		b2broadphase
		'Method UpdatePairs(callback:T Ptr) This method Has generics!!!!!!!!!!!!!!!!
		'Method Query(callback:T Ptr,aabb:b2AABB) This method Has generics!!!!!!!!!!!!!!!!
		'Method RayCast(callback:T Ptr,input:b2RayCastInput) This method Has generics!!!!!!!!!!!!!!!!
	class b2GrowableStack extends void
	
		'Method Push(element:T) This method Has generics!!!!!!!!!!!!!!!!
		'Method Pop:T() This method Has generics!!!!!!!!!!!!!!!!
	class b2DynamicTree extends void
	
		'Method Query(callback:T Ptr,aabb:b2AABB) This method Has generics!!!!!!!!!!!!!!!!
		'Method RayCast(callback:T Ptr,input:b2RayCastInput) This method Has generics!!!!!!!!!!!!!!!!
	----------------------------------------------------
	
----	listimports:
	
		X-operators---> pas poss pour le moment -> si avec Extension (en creant Default New() et en déprivatisant constrctor/destructor)
		O-warning pure Virtual ---> bof
		V-détecter fonctions non Inline (y en a dans mx2 specific en tout cas)
	M-dédoubler methodes recevant des Extends de Struct (comme b2JointDef avec tout les joints defs)
		V-ajouter base Struct dans les extends
		V-enums
	generics funcs et methods (avec caca pas Ptr si Class?)
		V-fields avec , (Float x,y,z) (prob dans b2worldmanifold p.ex)
		V b2body getnext 
		V overrides et Virtual
	Arrays
	
	
	'./Dynamics/Contacts/b2EdgeAndPolygonContact.h
	'-------------------------------------------------------------------	

			

			
	struct b2ContactVelocityConstraint
		Field points[b2_maxManifoldPoints]:b2VelocityConstraintPoint