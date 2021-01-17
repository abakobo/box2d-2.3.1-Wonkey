//Source code dump of Box2D scene: rubegoldberg.rube
//
//  Created by R.U.B.E 1.7.3
//  Using Box2D version 2.3.0
//  mar. septembre 13 2016 11:18:13
//
//  This code is originally intended for use in the Box2D testbed,
//  but you can easily use it in other applications by providing
//  a b2World for use as the 'm_world' variable in the code below.

#ifndef FROM_RUBE_H
#define FROM_RUBE_H

#include <./../../Box2D/Box2D/Box2D.h>

static void from_rube (b2World* m_world) {

b2Body** bodies = (b2Body**)b2Alloc(49 * sizeof(b2Body*));
b2Joint** joints = (b2Joint**)b2Alloc(21 * sizeof(b2Joint*));
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(7.153423309326172e+000f, 1.670340776443481e+000f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(8);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[0] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 0.000000000000000e+000f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 2.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(5.563859939575195e-001f, -1.749677062034607e-001f);
    vs[1].Set(5.563859939575195e-001f, 1.749676913022995e-001f);
    vs[2].Set(3.803986907005310e-001f, 1.749676913022995e-001f);
    vs[3].Set(3.803986907005310e-001f, -1.749676764011383e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[0]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 0.000000000000000e+000f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(3.814836144447327e-001f, 2.922968566417694e-002f);
    vs[1].Set(-3.814836442470551e-001f, 2.922968566417694e-002f);
    vs[2].Set(-3.814836442470551e-001f, -2.922968380153179e-002f);
    vs[3].Set(3.814835846424103e-001f, -2.922968938946724e-002f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[0]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 0.000000000000000e+000f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 2.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(-3.803986907005310e-001f, -1.749677509069443e-001f);
    vs[1].Set(-3.803986907005310e-001f, 1.749676167964935e-001f);
    vs[2].Set(-5.563859939575195e-001f, 1.749676167964935e-001f);
    vs[3].Set(-5.563859939575195e-001f, -1.749677807092667e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[0]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(6.433781147003174e+000f, -5.773855209350586e+000f);
  bd.angle = -3.138845443725586e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(0);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[1] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 3.000000119209290e-001f;
    fd.restitution = 8.000000119209290e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(7.564508914947510e-002f, -3.520573079586029e-001f);
    vs[1].Set(7.564508914947510e-002f, 3.440580368041992e-001f);
    vs[2].Set(-8.377373218536377e-002f, 3.440580368041992e-001f);
    vs[3].Set(-8.377373218536377e-002f, -3.520572483539581e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[1]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(6.153073310852051e+000f, -6.883327960968018e+000f);
  bd.angle = -3.138845443725586e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(0);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[2] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 3.000000119209290e-001f;
    fd.restitution = 8.000000119209290e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.290136575698853e-001f, -3.886288404464722e-001f);
    vs[1].Set(1.290136575698853e-001f, 3.800015449523926e-001f);
    vs[2].Set(-9.931153059005737e-002f, 3.800015449523926e-001f);
    vs[3].Set(-9.931153059005737e-002f, -3.886288404464722e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[2]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.183950233459473e+001f, 3.602335691452026e+000f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[3] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(9.921713918447495e-002f, 8.474133610725403e-001f);
    vs[1].Set(-9.921714663505554e-002f, 8.474133610725403e-001f);
    vs[2].Set(-9.921714663505554e-002f, -8.474133014678955e-001f);
    vs[3].Set(9.921713173389435e-002f, -8.474134802818298e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[3]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[4] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 8.000000119209290e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.631994056701660e+001f, -9.485961794853210e-001f);
    vs[1].Set(1.631994056701660e+001f, -7.803515195846558e-001f);
    vs[2].Set(1.106246852874756e+001f, -7.803515195846558e-001f);
    vs[3].Set(1.106246852874756e+001f, -9.485961794853210e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.057960510253906e+001f, 1.151917934417725e+001f);
    vs[1].Set(4.397109508514404e+000f, 1.200478839874268e+001f);
    vs[2].Set(4.355016708374023e+000f, 1.171288490295410e+001f);
    vs[3].Set(1.053751182556152e+001f, 1.122727584838867e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(8.198143005371094e+000f, 2.570266246795654e+000f);
    vs[1].Set(8.198143005371094e+000f, 7.988479614257812e+000f);
    vs[2].Set(7.955369472503662e+000f, 7.988479614257812e+000f);
    vs[3].Set(7.955369472503662e+000f, 2.570266246795654e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 8.000000119209290e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.819503974914551e+001f, 1.987720131874084e-001f);
    vs[1].Set(1.819503974914551e+001f, 3.670166730880737e-001f);
    vs[2].Set(1.728530120849609e+001f, 3.670166730880737e-001f);
    vs[3].Set(1.728530120849609e+001f, 1.987720131874084e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2ChainShape shape;
    b2Vec2 vs[2];
    vs[0].Set(1.560352897644043e+001f, 1.560027003288269e+000f);
    vs[1].Set(1.428396320343018e+001f, 1.043329477310181e+000f);
    shape.CreateChain(vs, 2);
    shape.m_prevVertex.Set(3.249283347032476e-037f, 8.345428744339117e-037f);
    shape.m_nextVertex.Set(5.605193857299268e-045f, 1.293283419152304e-036f);
    shape.m_hasPrevVertex = bool(0);
    shape.m_hasNextVertex = bool(0);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 2.000000029802322e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.791162300109863e+001f, 4.153039455413818e+000f);
    vs[1].Set(1.595912551879883e+001f, 4.151771068572998e+000f);
    vs[2].Set(1.596993637084961e+001f, 3.961252689361572e+000f);
    vs[3].Set(1.772054290771484e+001f, 3.962521076202393e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.987096595764160e+001f, 5.055010795593262e+000f);
    vs[1].Set(1.987096595764160e+001f, 5.297784805297852e+000f);
    vs[2].Set(1.770611953735352e+001f, 5.297784805297852e+000f);
    vs[3].Set(1.770611953735352e+001f, 5.055010795593262e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 8.000000119209290e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.243283462524414e+001f, 2.577025890350342e+000f);
    vs[1].Set(2.243283462524414e+001f, 2.745270729064941e+000f);
    vs[2].Set(2.152309608459473e+001f, 2.745270729064941e+000f);
    vs[3].Set(2.152309608459473e+001f, 2.577025890350342e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 8.000000119209290e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.932248878479004e+001f, 7.928324341773987e-001f);
    vs[1].Set(1.932248878479004e+001f, 9.610770344734192e-001f);
    vs[2].Set(1.841275024414062e+001f, 9.610770344734192e-001f);
    vs[3].Set(1.841275024414062e+001f, 7.928324341773987e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 2.000000029802322e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.866859817504883e+001f, -8.676959037780762e+000f);
    vs[1].Set(2.863477706909180e+001f, -8.080880165100098e+000f);
    vs[2].Set(-1.436322784423828e+001f, -8.084849357604980e+000f);
    vs[3].Set(-1.432940387725830e+001f, -8.680928230285645e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 8.000000119209290e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.721886634826660e+001f, -4.019510746002197e-001f);
    vs[1].Set(1.721886634826660e+001f, -2.337064146995544e-001f);
    vs[2].Set(1.630912780761719e+001f, -2.337064146995544e-001f);
    vs[3].Set(1.630912780761719e+001f, -4.019510746002197e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 8.000000119209290e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.141240882873535e+001f, 1.982975244522095e+000f);
    vs[1].Set(2.141240882873535e+001f, 2.151220083236694e+000f);
    vs[2].Set(2.050267028808594e+001f, 2.151220083236694e+000f);
    vs[3].Set(2.050267028808594e+001f, 1.982975244522095e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2ChainShape shape;
    b2Vec2 vs[2];
    vs[0].Set(1.918307685852051e+001f, 3.306496143341064e+000f);
    vs[1].Set(1.703903770446777e+001f, 2.196289300918579e+000f);
    shape.CreateChain(vs, 2);
    shape.m_prevVertex.Set(3.249283347032476e-037f, 8.345428744339117e-037f);
    shape.m_nextVertex.Set(5.605193857299268e-045f, 1.293354448168863e-036f);
    shape.m_hasPrevVertex = bool(0);
    shape.m_hasNextVertex = bool(0);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.167337036132812e+001f, -1.643088340759277e+000f);
    vs[1].Set(1.155714035034180e+001f, -1.521445751190186e+000f);
    vs[2].Set(1.071254825592041e+001f, -2.328456163406372e+000f);
    vs[3].Set(1.082877731323242e+001f, -2.450098514556885e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2ChainShape shape;
    b2Vec2 vs[2];
    vs[0].Set(2.509812164306641e+001f, 5.975147247314453e+000f);
    vs[1].Set(2.267613601684570e+001f, 5.234693050384521e+000f);
    shape.CreateChain(vs, 2);
    shape.m_prevVertex.Set(3.249283347032476e-037f, 8.345428744339117e-037f);
    shape.m_nextVertex.Set(5.605193857299268e-045f, 1.293315705068922e-036f);
    shape.m_hasPrevVertex = bool(0);
    shape.m_hasNextVertex = bool(0);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.104205131530762e+001f, 2.114856839179993e-001f);
    vs[1].Set(1.104205131530762e+001f, 3.797303140163422e-001f);
    vs[2].Set(9.940738677978516e+000f, 3.797303140163422e-001f);
    vs[3].Set(9.940738677978516e+000f, 2.114856988191605e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(7.290708065032959e+000f, 1.699831843376160e+000f);
    vs[1].Set(7.265159130096436e+000f, 2.009666919708252e+000f);
    vs[2].Set(7.070643901824951e+000f, 1.998311877250671e+000f);
    vs[3].Set(7.047934055328369e+000f, 1.699831843376160e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 2.000000029802322e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(9.923006057739258e+000f, 5.839899182319641e-001f);
    vs[1].Set(8.060965538024902e+000f, 1.171397447586060e+000f);
    vs[2].Set(8.013838768005371e+000f, 9.864833950996399e-001f);
    vs[3].Set(9.831165313720703e+000f, 4.210482835769653e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 8.000000119209290e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.835318946838379e+001f, 6.207946777343750e+000f);
    vs[1].Set(2.835318946838379e+001f, 6.376191616058350e+000f);
    vs[2].Set(2.769922447204590e+001f, 6.376191616058350e+000f);
    vs[3].Set(2.769922447204590e+001f, 6.207946777343750e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2ChainShape shape;
    b2Vec2 vs[2];
    vs[0].Set(1.703903770446777e+001f, 2.196289300918579e+000f);
    vs[1].Set(1.560352897644043e+001f, 1.560027003288269e+000f);
    shape.CreateChain(vs, 2);
    shape.m_prevVertex.Set(3.249283347032476e-037f, 8.345428744339117e-037f);
    shape.m_nextVertex.Set(5.605193857299268e-045f, 1.293375972113275e-036f);
    shape.m_hasPrevVertex = bool(0);
    shape.m_hasNextVertex = bool(0);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 8.000000119209290e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.343792152404785e+001f, -9.391410946846008e-001f);
    vs[1].Set(2.343792152404785e+001f, -7.708964347839355e-001f);
    vs[2].Set(2.212473106384277e+001f, -7.708964347839355e-001f);
    vs[3].Set(2.212473106384277e+001f, -9.391410946846008e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 8.000000119209290e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.741204071044922e+001f, 2.577025890350342e+000f);
    vs[1].Set(2.741204071044922e+001f, 2.745270729064941e+000f);
    vs[2].Set(2.427039337158203e+001f, 2.745270729064941e+000f);
    vs[3].Set(2.427039337158203e+001f, 2.577025890350342e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 2.000000029802322e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(-1.380286026000977e+001f, -8.436588287353516e+000f);
    vs[1].Set(-4.977362442016602e+001f, 1.512041282653809e+001f);
    vs[2].Set(-5.007194900512695e+001f, 1.460324859619141e+001f);
    vs[3].Set(-1.410118389129639e+001f, -8.953750610351562e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 2.000000029802322e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(6.208030700683594e+001f, 1.814939880371094e+001f);
    vs[1].Set(6.167937469482422e+001f, 1.859178543090820e+001f);
    vs[2].Set(2.823721694946289e+001f, -8.435064315795898e+000f);
    vs[3].Set(2.863815689086914e+001f, -8.877445220947266e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2ChainShape shape;
    b2Vec2 vs[2];
    vs[0].Set(2.115560913085938e+001f, 4.700156211853027e+000f);
    vs[1].Set(2.044397354125977e+001f, 4.096230506896973e+000f);
    shape.CreateChain(vs, 2);
    shape.m_prevVertex.Set(3.249283347032476e-037f, 8.345428744339117e-037f);
    shape.m_nextVertex.Set(5.605193857299268e-045f, 1.293292028730068e-036f);
    shape.m_hasPrevVertex = bool(0);
    shape.m_hasNextVertex = bool(0);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 0.000000000000000e+000f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(7.488466739654541e+000f, 1.697601437568665e+000f);
    vs[1].Set(7.045552253723145e+000f, 1.697015643119812e+000f);
    vs[2].Set(7.131743907928467e+000f, 1.522507667541504e+000f);
    vs[3].Set(7.414176464080811e+000f, 1.515602588653564e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(1);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2ChainShape shape;
    b2Vec2 vs[2];
    vs[0].Set(1.012120485305786e+000f, -1.203510761260986e+000f);
    vs[1].Set(8.127925872802734e+000f, -1.203510761260986e+000f);
    shape.CreateChain(vs, 2);
    shape.m_prevVertex.Set(3.249283347032476e-037f, 8.345428744339117e-037f);
    shape.m_nextVertex.Set(5.605193857299268e-045f, 1.293358752957746e-036f);
    shape.m_hasPrevVertex = bool(0);
    shape.m_hasNextVertex = bool(0);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(-2.384965658187866e+000f, 1.565266609191895e+001f);
    vs[1].Set(-2.384965658187866e+000f, 1.589544010162354e+001f);
    vs[2].Set(-7.031423568725586e+000f, 1.606185531616211e+001f);
    vs[3].Set(-7.031423568725586e+000f, 1.581908035278320e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(8.623795509338379e+000f, 7.986671447753906e+000f);
    vs[1].Set(8.623795509338379e+000f, 8.229445457458496e+000f);
    vs[2].Set(7.950877189636230e+000f, 8.229445457458496e+000f);
    vs[3].Set(7.950877189636230e+000f, 7.986671447753906e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 2.000000029802322e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.791849327087402e+001f, 5.054973125457764e+000f);
    vs[1].Set(1.770646858215332e+001f, 5.055389404296875e+000f);
    vs[2].Set(1.772291755676270e+001f, 4.133873939514160e+000f);
    vs[3].Set(1.791343688964844e+001f, 4.144682884216309e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 2.000000029802322e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(-5.547423362731934e-001f, 1.375105190277100e+001f);
    vs[1].Set(-7.455649375915527e-001f, 1.375192642211914e+001f);
    vs[2].Set(-7.635607719421387e-001f, 7.908406257629395e+000f);
    vs[3].Set(-5.727376937866211e-001f, 7.907532691955566e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 2.000000029802322e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(6.170930862426758e-001f, 3.991966247558594e+000f);
    vs[1].Set(5.832719802856445e-001f, 4.588045120239258e+000f);
    vs[2].Set(-4.010983705520630e-001f, 4.584075927734375e+000f);
    vs[3].Set(-3.672742247581482e-001f, 3.987997055053711e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 2.000000029802322e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(-5.345141887664795e-001f, 1.373417568206787e+001f);
    vs[1].Set(-2.392356634140015e+000f, 1.590833759307861e+001f);
    vs[2].Set(-2.537431478500366e+000f, 1.578436946868896e+001f);
    vs[3].Set(-6.795890331268311e-001f, 1.361020755767822e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 8.000000119209290e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.038518905639648e+001f, 1.389041066169739e+000f);
    vs[1].Set(2.038518905639648e+001f, 1.557285785675049e+000f);
    vs[2].Set(1.947545051574707e+001f, 1.557285785675049e+000f);
    vs[3].Set(1.947545051574707e+001f, 1.389041066169739e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(7.342308521270752e+000f, 2.300606012344360e+000f);
    vs[1].Set(7.298935890197754e+000f, 1.148176479339600e+001f);
    vs[2].Set(7.056161880493164e+000f, 1.149811553955078e+001f);
    vs[3].Set(7.056161880493164e+000f, 2.300606012344360e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 2.000000029802322e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(4.683557033538818e+000f, 5.022264480590820e+000f);
    vs[1].Set(4.672747135162354e+000f, 5.212782859802246e+000f);
    vs[2].Set(4.358123302459717e+000f, 5.211514472961426e+000f);
    vs[3].Set(4.368934154510498e+000f, 5.020996093750000e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 2.000000029802322e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.619143486022949e+000f, 1.579549884796143e+001f);
    vs[1].Set(2.474522113800049e+000f, 1.591999530792236e+001f);
    vs[2].Set(6.087579727172852e-001f, 1.375262737274170e+001f);
    vs[3].Set(7.533802986145020e-001f, 1.362813091278076e+001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 2.000000029802322e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(8.115987777709961e-001f, 1.375105190277100e+001f);
    vs[1].Set(6.207761764526367e-001f, 1.375192642211914e+001f);
    vs[2].Set(6.027803421020508e-001f, 7.908406257629395e+000f);
    vs[3].Set(7.936034202575684e-001f, 7.907532691955566e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 8.000000119209290e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(9.957516789436340e-001f, -1.650732755661011e+000f);
    vs[1].Set(9.957516789436340e-001f, -1.482487916946411e+000f);
    vs[2].Set(5.827773213386536e-001f, -1.482487916946411e+000f);
    vs[3].Set(5.827773213386536e-001f, -1.650732755661011e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(8.947141647338867e+000f, -2.402071952819824e+000f);
    vs[1].Set(8.059279441833496e+000f, -1.509828448295593e+000f);
    vs[2].Set(7.823388099670410e+000f, -1.511801719665527e+000f);
    vs[3].Set(8.825365066528320e+000f, -2.518160343170166e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 8.000000119209290e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(-6.010749340057373e-001f, -9.306051731109619e-001f);
    vs[1].Set(-6.010749340057373e-001f, -7.623603343963623e-001f);
    vs[2].Set(-7.704768180847168e-001f, -7.623603343963623e-001f);
    vs[3].Set(-7.704768180847168e-001f, -9.306051731109619e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2ChainShape shape;
    b2Vec2 vs[2];
    vs[0].Set(2.176111412048340e+001f, 5.379695892333984e+000f);
    vs[1].Set(2.115560913085938e+001f, 4.700156211853027e+000f);
    shape.CreateChain(vs, 2);
    shape.m_prevVertex.Set(3.249283347032476e-037f, 8.345428744339117e-037f);
    shape.m_nextVertex.Set(5.605193857299268e-045f, 1.293326467041128e-036f);
    shape.m_hasPrevVertex = bool(0);
    shape.m_hasNextVertex = bool(0);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2ChainShape shape;
    b2Vec2 vs[2];
    vs[0].Set(2.206690788269043e+001f, 5.190674781799316e+000f);
    vs[1].Set(2.176111412048340e+001f, 5.379695892333984e+000f);
    shape.CreateChain(vs, 2);
    shape.m_prevVertex.Set(3.249283347032476e-037f, 8.345428744339117e-037f);
    shape.m_nextVertex.Set(5.605193857299268e-045f, 1.293317857463363e-036f);
    shape.m_hasPrevVertex = bool(0);
    shape.m_hasNextVertex = bool(0);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2ChainShape shape;
    b2Vec2 vs[2];
    vs[0].Set(2.267613601684570e+001f, 5.234693050384521e+000f);
    vs[1].Set(2.206690788269043e+001f, 5.190674781799316e+000f);
    shape.CreateChain(vs, 2);
    shape.m_prevVertex.Set(3.249283347032476e-037f, 8.345428744339117e-037f);
    shape.m_nextVertex.Set(5.605193857299268e-045f, 1.293335076618892e-036f);
    shape.m_hasPrevVertex = bool(0);
    shape.m_hasNextVertex = bool(0);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.064206027984619e+001f, -2.502783775329590e+000f);
    vs[1].Set(1.046836185455322e+001f, -2.334539890289307e+000f);
    vs[2].Set(8.825257301330566e+000f, -2.329693317413330e+000f);
    vs[3].Set(8.825076103210449e+000f, -2.497937202453613e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 0.000000000000000e+000f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(8.081924438476562e+000f, 1.692813396453857e+000f);
    vs[1].Set(7.779927253723145e+000f, 1.692750453948975e+000f);
    vs[2].Set(7.742493629455566e+000f, 1.507672309875488e+000f);
    vs[3].Set(8.051409721374512e+000f, 1.501664638519287e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.080962371826172e+001f, -2.448249101638794e+000f);
    vs[1].Set(1.011487960815430e+001f, -1.714011669158936e+000f);
    vs[2].Set(9.993103027343750e+000f, -1.830100059509277e+000f);
    vs[3].Set(1.068784713745117e+001f, -2.564337491989136e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2ChainShape shape;
    b2Vec2 vs[2];
    vs[0].Set(2.044397354125977e+001f, 4.096230506896973e+000f);
    vs[1].Set(1.918307685852051e+001f, 3.306496143341064e+000f);
    shape.CreateChain(vs, 2);
    shape.m_prevVertex.Set(3.249283347032476e-037f, 8.345428744339117e-037f);
    shape.m_nextVertex.Set(5.605193857299268e-045f, 1.293352295774422e-036f);
    shape.m_hasPrevVertex = bool(0);
    shape.m_hasNextVertex = bool(0);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2ChainShape shape;
    b2Vec2 vs[2];
    vs[0].Set(2.509812164306641e+001f, 5.975147247314453e+000f);
    vs[1].Set(2.769973564147949e+001f, 6.370401859283447e+000f);
    shape.CreateChain(vs, 2);
    shape.m_prevVertex.Set(3.249283347032476e-037f, 8.345428744339117e-037f);
    shape.m_nextVertex.Set(5.605193857299268e-045f, 1.293360905352187e-036f);
    shape.m_hasPrevVertex = bool(0);
    shape.m_hasNextVertex = bool(0);

    fd.shape = &shape;

    bodies[4]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(-3.580528497695923e-002f, -7.826317548751831e-001f);
  bd.angle = 8.054048418998718e-001f;
  bd.linearVelocity.Set(-2.581855468451977e-002f, 0.000000000000000e+000f);
  bd.angularVelocity = 5.164637044072151e-002f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(8);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[5] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 2.000000029802322e-001f;
    fd.density = 2.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2CircleShape shape;
    shape.m_radius = 5.000000000000000e-001f;
    shape.m_p.Set(0.000000000000000e+000f, 0.000000000000000e+000f);

    fd.shape = &shape;

    bodies[5]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(8.139089584350586e+000f, -1.215644359588623e+000f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[6] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 0.000000000000000e+000f;
    fd.restitution = 8.000000119209290e-001f;
    fd.density = 2.000000029802322e-001f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(4.230768382549286e-001f, 2.361963689327240e-001f);
    vs[1].Set(-4.230768680572510e-001f, 2.361963689327240e-001f);
    vs[2].Set(-4.230768680572510e-001f, -2.361963540315628e-001f);
    vs[3].Set(4.230767786502838e-001f, -2.361963987350464e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[6]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.655718612670898e+001f, 6.269404888153076e-001f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[7] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.067263782024384e-001f, 8.474133014678955e-001f);
    vs[1].Set(-9.170791506767273e-002f, 8.474133014678955e-001f);
    vs[2].Set(-9.170791506767273e-002f, -8.474133610725403e-001f);
    vs[3].Set(1.067263633012772e-001f, -8.474135994911194e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[7]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(5.781366825103760e+000f, -6.173098087310791e+000f);
  bd.angle = -3.138845443725586e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(0);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[8] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 3.000000119209290e-001f;
    fd.restitution = 8.000000119209290e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.173663735389709e-001f, -3.785233795642853e-001f);
    vs[1].Set(1.173663735389709e-001f, 3.901071250438690e-001f);
    vs[2].Set(-1.109587550163269e-001f, 3.901071250438690e-001f);
    vs[3].Set(-1.109587550163269e-001f, -3.785232603549957e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[8]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.796243667602539e+001f, 5.424887180328369e+000f);
  bd.angle = 4.814267158508301e-003f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(8);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[9] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 5.000000000000000e-001f;
    fd.restitution = 6.999999880790710e-001f;
    fd.density = 5.000000074505806e-002f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.193307399749756e+000f, -7.795047014951706e-002f);
    vs[1].Set(1.193307399749756e+000f, 9.368468075990677e-002f);
    vs[2].Set(-1.108393430709839e+000f, 1.137156039476395e-001f);
    vs[3].Set(-1.108393430709839e+000f, -9.785395860671997e-002f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[9]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(5.910329341888428e+000f, -4.683853626251221e+000f);
  bd.angle = -3.138845443725586e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(0);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[10] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 3.000000119209290e-001f;
    fd.restitution = 8.000000119209290e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(7.729114592075348e-002f, -8.702836930751801e-002f);
    vs[1].Set(7.729114592075348e-002f, 1.265033483505249e-001f);
    vs[2].Set(-8.333943784236908e-002f, 1.265033483505249e-001f);
    vs[3].Set(-8.333943784236908e-002f, -8.702835440635681e-002f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[10]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(5.933251380920410e+000f, -4.948396682739258e+000f);
  bd.angle = -3.138845443725586e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(0);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[11] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 3.000000119209290e-001f;
    fd.restitution = 8.000000119209290e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(4.110610783100128e-001f, -1.919811218976974e-001f);
    vs[1].Set(4.110610783100128e-001f, 1.856334656476974e-001f);
    vs[2].Set(-3.899859189987183e-001f, 1.856334656476974e-001f);
    vs[3].Set(-3.899859189987183e-001f, -1.919810473918915e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[11]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.078072738647461e+001f, 3.009121179580688e+000f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[12] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.067263782024384e-001f, 8.474133014678955e-001f);
    vs[1].Set(-9.170791506767273e-002f, 8.474133014678955e-001f);
    vs[2].Set(-9.170791506767273e-002f, -8.474133610725403e-001f);
    vs[3].Set(1.067263633012772e-001f, -8.474135994911194e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[12]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(6.382012844085693e+000f, -5.182919979095459e+000f);
  bd.angle = -3.138845443725586e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(0);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[13] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 3.000000119209290e-001f;
    fd.restitution = 8.000000119209290e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.487545818090439e-001f, -3.301024138927460e-001f);
    vs[1].Set(1.272160839289427e-002f, 3.525920212268829e-001f);
    vs[2].Set(-1.436236351728439e-001f, 3.214388489723206e-001f);
    vs[3].Set(-7.590693421661854e-003f, -3.612554669380188e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[13]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(-2.771063446998596e-001f, -1.387045264244080e+000f);
  bd.angle = 2.316761016845703e-002f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[14] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 0.000000000000000e+000f;
    fd.restitution = 8.000000119209290e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(9.316213130950928e-001f, 8.968108892440796e-002f);
    vs[1].Set(-4.312384128570557e-001f, 8.968108892440796e-002f);
    vs[2].Set(-4.312384128570557e-001f, -8.438628166913986e-002f);
    vs[3].Set(9.316212534904480e-001f, -8.438629657030106e-002f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[14]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[15] = m_world->CreateBody(&bd);

}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(5.941703319549561e+000f, -5.482785224914551e+000f);
  bd.angle = -3.138845443725586e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(0);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[16] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 3.000000119209290e-001f;
    fd.restitution = 8.000000119209290e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(2.744700312614441e-001f, -1.249117255210876e-001f);
    vs[1].Set(2.744700312614441e-001f, 1.298676133155823e-001f);
    vs[2].Set(-2.660023868083954e-001f, 1.298676133155823e-001f);
    vs[3].Set(-2.660023868083954e-001f, -1.249116957187653e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[16]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(8.646305799484253e-001f, 5.665562152862549e+000f);
  bd.angle = -7.091794908046722e-002f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[17] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(5.343105316162109e+000f, -1.643933355808258e-001f);
    vs[1].Set(5.343105316162109e+000f, 4.717625677585602e-002f);
    vs[2].Set(-1.553421258926392e+000f, 3.515185415744781e-002f);
    vs[3].Set(-1.553421258926392e+000f, -1.764177083969116e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[17]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(5.349596977233887e+000f, 4.414768218994141e-001f);
    vs[1].Set(5.197199344635010e+000f, 4.583749771118164e-001f);
    vs[2].Set(5.148450374603271e+000f, -3.436088562011719e-003f);
    vs[3].Set(5.300848007202148e+000f, -2.033460140228271e-002f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[17]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(-1.415040493011475e+000f, 1.686131954193115e-002f);
    vs[1].Set(-1.457947134971619e+000f, 4.792520999908447e-001f);
    vs[2].Set(-1.610695600509644e+000f, 4.658881425857544e-001f);
    vs[3].Set(-1.567788958549500e+000f, 3.497719764709473e-003f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[17]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(-4.321518898010254e+000f, 1.640526008605957e+001f);
  bd.angle = 8.054048418998718e-001f;
  bd.linearVelocity.Set(-2.581855468451977e-002f, 0.000000000000000e+000f);
  bd.angularVelocity = 5.164637044072151e-002f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(8);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[18] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 2.000000029802322e-001f;
    fd.density = 1.000000000000000e+001f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2CircleShape shape;
    shape.m_radius = 5.000000000000000e-001f;
    shape.m_p.Set(0.000000000000000e+000f, 0.000000000000000e+000f);

    fd.shape = &shape;

    bodies[18]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(5.811669826507568e+000f, -6.867472171783447e+000f);
  bd.angle = -3.138845443725586e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(0);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[19] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 3.000000119209290e-001f;
    fd.restitution = 8.000000119209290e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.480759680271149e-001f, -3.798889219760895e-001f);
    vs[1].Set(1.480759680271149e-001f, 3.887415528297424e-001f);
    vs[2].Set(-8.024924993515015e-002f, 3.887415528297424e-001f);
    vs[3].Set(-8.024924993515015e-002f, -3.798889219760895e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[19]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.574825096130371e+001f, 3.597975730895996e+000f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[20] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(9.921713918447495e-002f, 8.474133610725403e-001f);
    vs[1].Set(-9.921714663505554e-002f, 8.474133610725403e-001f);
    vs[2].Set(-9.921714663505554e-002f, -8.474133014678955e-001f);
    vs[3].Set(9.921713173389435e-002f, -8.474134802818298e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[20]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.678366470336914e+001f, 3.597975730895996e+000f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[21] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(9.921713918447495e-002f, 8.474133610725403e-001f);
    vs[1].Set(-9.921714663505554e-002f, 8.474133610725403e-001f);
    vs[2].Set(-9.921714663505554e-002f, -8.474133014678955e-001f);
    vs[3].Set(9.921713173389435e-002f, -8.474134802818298e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[21]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.352297210693359e+001f, 7.127127051353455e-002f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[22] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(9.921713918447495e-002f, 8.474133610725403e-001f);
    vs[1].Set(-9.921714663505554e-002f, 8.474133610725403e-001f);
    vs[2].Set(-9.921714663505554e-002f, -8.474133014678955e-001f);
    vs[3].Set(9.921713173389435e-002f, -8.474134802818298e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[22]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(5.914195060729980e+000f, -4.482854843139648e+000f);
  bd.angle = -3.138845443725586e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(0);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[23] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 3.000000119209290e-001f;
    fd.restitution = 8.000000119209290e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.842054724693298e-001f, -1.876007169485092e-001f);
    vs[1].Set(1.842054724693298e-001f, 1.883789598941803e-001f);
    vs[2].Set(-1.748978495597839e-001f, 1.883789598941803e-001f);
    vs[3].Set(-1.748978495597839e-001f, -1.876006871461868e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[23]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.248203182220459e+001f, 7.127127051353455e-002f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[24] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(9.921713918447495e-002f, 8.474133610725403e-001f);
    vs[1].Set(-9.921714663505554e-002f, 8.474133610725403e-001f);
    vs[2].Set(-9.921714663505554e-002f, -8.474133014678955e-001f);
    vs[3].Set(9.921713173389435e-002f, -8.474134802818298e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[24]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(5.937812805175781e+000f, -5.223819255828857e+000f);
  bd.angle = -3.138845443725586e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(0);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[25] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 3.000000119209290e-001f;
    fd.restitution = 8.000000119209290e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(3.248913884162903e-001f, -1.461551934480667e-001f);
    vs[1].Set(3.248913884162903e-001f, 1.543006747961044e-001f);
    vs[2].Set(-3.124761283397675e-001f, 1.543006747961044e-001f);
    vs[3].Set(-3.124761283397675e-001f, -1.461551636457443e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[25]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(5.670880794525146e+000f, 5.606304168701172e+000f);
  bd.angle = 6.462279510498047e+001f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(8);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[26] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 2.000000029802322e-001f;
    fd.density = 1.000000014901161e-001f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2CircleShape shape;
    shape.m_radius = 2.500000000000000e-001f;
    shape.m_p.Set(0.000000000000000e+000f, 0.000000000000000e+000f);

    fd.shape = &shape;

    bodies[26]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.079027271270752e+001f, 7.081282138824463e+000f);
  bd.angle = 1.589920759201050e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[27] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 2.000000029802322e-001f;
    fd.density = 5.000000000000000e-001f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(4.786931037902832e+000f, -2.249179184436798e-001f);
    vs[1].Set(4.786931037902832e+000f, 1.007060110569000e-001f);
    vs[2].Set(-1.553421497344971e+000f, -2.569290995597839e-002f);
    vs[3].Set(-1.553421497344971e+000f, -1.220539808273315e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[27]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.559602928161621e+001f, 7.127127051353455e-002f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[28] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(9.921997785568237e-002f, -8.474146723747253e-001f);
    vs[1].Set(9.888499975204468e-002f, 8.474121093750000e-001f);
    vs[2].Set(-9.954917430877686e-002f, 8.473728895187378e-001f);
    vs[3].Set(-9.921428561210632e-002f, -8.474537730216980e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[28]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(8.146527290344238e+000f, 8.603442192077637e+000f);
  bd.angle = 1.590483069419861e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(8);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[29] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 2.000000029802322e-001f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(3.446016013622284e-001f, -2.423547506332397e-001f);
    vs[1].Set(3.446016013622284e-001f, 2.525457143783569e-001f);
    vs[2].Set(-3.599468171596527e-001f, 2.588300704956055e-001f);
    vs[3].Set(-3.599468171596527e-001f, -2.446277290582657e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[29]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.144438743591309e+001f, 7.127127051353455e-002f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[30] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(9.921713918447495e-002f, 8.474133610725403e-001f);
    vs[1].Set(-9.921714663505554e-002f, 8.474133610725403e-001f);
    vs[2].Set(-9.921714663505554e-002f, -8.474133014678955e-001f);
    vs[3].Set(9.921713173389435e-002f, -8.474134802818298e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[30]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.810375213623047e+001f, 6.631551742553711e+000f);
  bd.angle = 6.462279510498047e+001f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(8);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[31] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 2.000000029802322e-001f;
    fd.density = 1.000000014901161e-001f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2CircleShape shape;
    shape.m_radius = 2.500000000000000e-001f;
    shape.m_p.Set(0.000000000000000e+000f, 0.000000000000000e+000f);

    fd.shape = &shape;

    bodies[31]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(5.946727752685547e+000f, -5.742179393768311e+000f);
  bd.angle = -3.138845443725586e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(0);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[32] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 3.000000119209290e-001f;
    fd.restitution = 8.000000119209290e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(3.141191303730011e-001f, -1.742075979709625e-001f);
    vs[1].Set(3.141191303730011e-001f, 1.602589339017868e-001f);
    vs[2].Set(-3.225626945495605e-001f, 1.602589339017868e-001f);
    vs[3].Set(-3.225626945495605e-001f, -1.742075234651566e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[32]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.867184638977051e+001f, 1.818919181823730e+000f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[33] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(9.921713918447495e-002f, 8.474133610725403e-001f);
    vs[1].Set(-9.921714663505554e-002f, 8.474133610725403e-001f);
    vs[2].Set(-9.921714663505554e-002f, -8.474133014678955e-001f);
    vs[3].Set(9.921713173389435e-002f, -8.474134802818298e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[33]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.761596107482910e+001f, 1.220154881477356e+000f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[34] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(9.921713918447495e-002f, 8.474133610725403e-001f);
    vs[1].Set(-9.921714663505554e-002f, 8.474133610725403e-001f);
    vs[2].Set(-9.921714663505554e-002f, -8.474133014678955e-001f);
    vs[3].Set(9.921713173389435e-002f, -8.474134802818298e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[34]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.873267364501953e+001f, 5.134416103363037e+000f);
  bd.angle = 1.099908113479614e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(8);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[35] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 0.000000000000000e+000f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 2.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.665431499481201e+000f, -3.425904512405396e-001f);
    vs[1].Set(1.665431499481201e+000f, 3.370162248611450e-001f);
    vs[2].Set(1.462241888046265e+000f, 3.370162248611450e-001f);
    vs[3].Set(1.462241888046265e+000f, -3.425903916358948e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[35]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 0.000000000000000e+000f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 0.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.458525538444519e+000f, 6.259308010339737e-002f);
    vs[1].Set(-1.458525657653809e+000f, 6.259308010339737e-002f);
    vs[2].Set(-1.458525657653809e+000f, -6.259307265281677e-002f);
    vs[3].Set(1.458525419235229e+000f, -6.259308755397797e-002f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[35]->CreateFixture(&fd);
  }
  {
    b2FixtureDef fd;
    fd.friction = 0.000000000000000e+000f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 2.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(-1.462772727012634e+000f, -3.372440636157990e-001f);
    vs[1].Set(-1.462772727012634e+000f, 3.423626720905304e-001f);
    vs[2].Set(-1.665962457656860e+000f, 3.423626720905304e-001f);
    vs[3].Set(-1.665962457656860e+000f, -3.372441232204437e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[35]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(-6.535434722900391e-001f, -1.142022252082825e+000f);
  bd.angle = -1.570796251296997e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[36] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 0.000000000000000e+000f;
    fd.restitution = 8.000000119209290e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(3.248410224914551e-001f, -8.438623696565628e-002f);
    vs[1].Set(3.248410224914551e-001f, 8.968114852905273e-002f);
    vs[2].Set(-3.142510652542114e-001f, 8.968114852905273e-002f);
    vs[3].Set(-3.142510652542114e-001f, -8.438622206449509e-002f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[36]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[37] = m_world->CreateBody(&bd);

}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.455838489532471e+001f, 7.127127051353455e-002f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[38] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(9.921713918447495e-002f, 8.474133610725403e-001f);
    vs[1].Set(-9.921714663505554e-002f, 8.474133610725403e-001f);
    vs[2].Set(-9.921714663505554e-002f, -8.474133014678955e-001f);
    vs[3].Set(9.921713173389435e-002f, -8.474134802818298e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[38]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[39] = m_world->CreateBody(&bd);

}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[40] = m_world->CreateBody(&bd);

}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(5.478005886077881e+000f, -5.181593894958496e+000f);
  bd.angle = -3.138845443725586e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(0);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[41] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 3.000000119209290e-001f;
    fd.restitution = 8.000000119209290e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.482706218957901e-001f, 3.280214071273804e-001f);
    vs[1].Set(-8.590709418058395e-003f, 3.564623296260834e-001f);
    vs[2].Set(-1.327803283929825e-001f, -3.284855782985687e-001f);
    vs[3].Set(2.408098801970482e-002f, -3.569265007972717e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[41]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.470820426940918e+001f, 3.597976446151733e+000f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[42] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(9.921713918447495e-002f, 8.474133610725403e-001f);
    vs[1].Set(-9.921714663505554e-002f, 8.474133610725403e-001f);
    vs[2].Set(-9.921714663505554e-002f, -8.474133014678955e-001f);
    vs[3].Set(9.921713173389435e-002f, -8.474134802818298e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[42]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(6.136520862579346e+000f, -6.168797969818115e+000f);
  bd.angle = -3.138845443725586e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(0);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[43] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 3.000000119209290e-001f;
    fd.restitution = 8.000000119209290e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(1.152114868164062e-001f, -3.786473572254181e-001f);
    vs[1].Set(1.152114868164062e-001f, 3.899831771850586e-001f);
    vs[2].Set(-1.131136417388916e-001f, 3.899831771850586e-001f);
    vs[3].Set(-1.131136417388916e-001f, -3.786471188068390e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[43]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(2.275662994384766e+001f, 3.592880964279175e+000f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[44] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(9.921713918447495e-002f, 8.474133610725403e-001f);
    vs[1].Set(-9.921714663505554e-002f, 8.474133610725403e-001f);
    vs[2].Set(-9.921714663505554e-002f, -4.354978084564209e+000f);
    vs[3].Set(9.921713173389435e-002f, -4.354978084564209e+000f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[44]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[45] = m_world->CreateBody(&bd);

}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(1.972773170471191e+001f, 2.411245346069336e+000f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[46] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 2.000000029802322e-001f;
    fd.restitution = 0.000000000000000e+000f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(9.921713918447495e-002f, 8.474133610725403e-001f);
    vs[1].Set(-9.921714663505554e-002f, 8.474133610725403e-001f);
    vs[2].Set(-9.921714663505554e-002f, -8.474133014678955e-001f);
    vs[3].Set(9.921713173389435e-002f, -8.474134802818298e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[46]->CreateFixture(&fd);
  }
}
{
  b2BodyDef bd;
  bd.type = b2BodyType(0);
  bd.position.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angle = 0.000000000000000e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(2);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[47] = m_world->CreateBody(&bd);

}
{
  b2BodyDef bd;
  bd.type = b2BodyType(2);
  bd.position.Set(5.412244796752930e+000f, -5.782528877258301e+000f);
  bd.angle = -3.138845443725586e+000f;
  bd.linearVelocity.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  bd.angularVelocity = 0.000000000000000e+000f;
  bd.linearDamping = 0.000000000000000e+000f;
  bd.angularDamping = 0.000000000000000e+000f;
  bd.allowSleep = bool(4);
  bd.awake = bool(0);
  bd.fixedRotation = bool(0);
  bd.bullet = bool(0);
  bd.active = bool(32);
  bd.gravityScale = 1.000000000000000e+000f;
  bodies[48] = m_world->CreateBody(&bd);

  {
    b2FixtureDef fd;
    fd.friction = 3.000000119209290e-001f;
    fd.restitution = 8.000000119209290e-001f;
    fd.density = 1.000000000000000e+000f;
    fd.isSensor = bool(0);
    fd.filter.categoryBits = uint16(1);
    fd.filter.maskBits = uint16(65535);
    fd.filter.groupIndex = int16(0);
    b2PolygonShape shape;
    b2Vec2 vs[8];
    vs[0].Set(8.067706227302551e-002f, -3.479100167751312e-001f);
    vs[1].Set(8.067706227302551e-002f, 3.482054471969604e-001f);
    vs[2].Set(-7.874175906181335e-002f, 3.482054471969604e-001f);
    vs[3].Set(-7.874175906181335e-002f, -3.479098975658417e-001f);
    shape.Set(vs, 4);

    fd.shape = &shape;

    bodies[48]->CreateFixture(&fd);
  }
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[4];
  jd.bodyB = bodies[35];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(2.873267364501953e+001f, 5.134416103363037e+000f);
  jd.localAnchorB.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  joints[0] = m_world->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[23];
  jd.bodyB = bodies[10];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(8.363898377865553e-004f, 1.560461223125458e-001f);
  jd.localAnchorB.Set(-3.581499680876732e-003f, -4.494129493832588e-002f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  joints[1] = m_world->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[32];
  jd.bodyB = bodies[8];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(1.821715533733368e-001f, 1.166393160820007e-001f);
  jd.localAnchorB.Set(1.562742702662945e-002f, -3.138234615325928e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  joints[2] = m_world->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[4];
  jd.bodyB = bodies[36];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(-6.608279347419739e-001f, -8.509724140167236e-001f);
  jd.localAnchorB.Set(-2.910498380661011e-001f, -7.284440565854311e-003f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  joints[3] = m_world->CreateJoint(&jd);
}
{
  b2DistanceJointDef jd;
  jd.bodyA = bodies[4];
  jd.bodyB = bodies[5];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(4.595311164855957e+000f, -1.409123420715332e+000f);
  jd.localAnchorB.Set(4.783708136528730e-003f, 9.254086180590093e-004f);
  jd.length = 4.671227455139160e+000f;
  jd.frequencyHz = 0.000000000000000e+000f;
  jd.dampingRatio = 0.000000000000000e+000f;
  joints[4] = m_world->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[10];
  jd.bodyB = bodies[11];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(3.814474985119887e-005f, 9.424854815006256e-002f);
  jd.localAnchorB.Set(2.223334275186062e-002f, -1.703564822673798e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  joints[5] = m_world->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[11];
  jd.bodyB = bodies[41];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(3.915640115737915e-001f, -6.454584002494812e-002f);
  jd.localAnchorB.Set(-6.432041525840759e-002f, -2.964915335178375e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  joints[6] = m_world->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[41];
  jd.bodyB = bodies[48];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(7.003130018711090e-002f, 2.955459952354431e-001f);
  jd.localAnchorB.Set(2.619568957015872e-003f, -3.052060604095459e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  joints[7] = m_world->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[25];
  jd.bodyB = bodies[16];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(-1.589771127328277e-003f, 1.294880807399750e-001f);
  jd.localAnchorB.Set(1.589295570738614e-003f, -1.294876039028168e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  joints[8] = m_world->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[4];
  jd.bodyB = bodies[27];
  jd.collideConnected = bool(1);
  jd.localAnchorA.Set(1.085271549224854e+001f, 5.685722351074219e+000f);
  jd.localAnchorB.Set(-1.397351622581482e+000f, -8.028738200664520e-002f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  joints[9] = m_world->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[36];
  jd.bodyB = bodies[14];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(2.482175827026367e-001f, -1.928825047798455e-003f);
  jd.localAnchorB.Set(-3.783383965492249e-001f, 5.571336951106787e-003f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  joints[10] = m_world->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[13];
  jd.bodyB = bodies[1];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(-4.893289506435394e-002f, 2.880721986293793e-001f);
  jd.localAnchorB.Set(1.211793627589941e-003f, -3.030030131340027e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  joints[11] = m_world->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[8];
  jd.bodyB = bodies[19];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(-1.419764943420887e-002f, 3.472273647785187e-001f);
  jd.localAnchorB.Set(1.419764943420887e-002f, -3.472273647785187e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  joints[12] = m_world->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[11];
  jd.bodyB = bodies[25];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(-2.784118754789233e-003f, 1.501919031143188e-001f);
  jd.localAnchorB.Set(1.020645722746849e-003f, -1.252421736717224e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  joints[13] = m_world->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[16];
  jd.bodyB = bodies[32];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(-2.156140282750130e-003f, 1.297037452459335e-001f);
  jd.localAnchorB.Set(2.155664609745145e-003f, -1.297032535076141e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  joints[14] = m_world->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[4];
  jd.bodyB = bodies[0];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(7.153423309326172e+000f, 1.670340776443481e+000f);
  jd.localAnchorB.Set(0.000000000000000e+000f, 0.000000000000000e+000f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  joints[15] = m_world->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[32];
  jd.bodyB = bodies[43];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(-1.804183274507523e-001f, 1.079236492514610e-001f);
  jd.localAnchorB.Set(8.202061988413334e-003f, -3.192147314548492e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  joints[16] = m_world->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[11];
  jd.bodyB = bodies[13];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(-3.627054393291473e-001f, -6.571095436811447e-002f);
  jd.localAnchorB.Set(8.541004359722137e-002f, -3.014662265777588e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  joints[17] = m_world->CreateJoint(&jd);
}
{
  b2PrismaticJointDef jd;
  jd.bodyA = bodies[4];
  jd.bodyB = bodies[6];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(8.139089584350586e+000f, -1.215644359588623e+000f);
  jd.localAnchorB.Set(1.000000000000000e+000f, 0.000000000000000e+000f);
  jd.localAxisA.Set(1.000000000000000e+000f, 0.000000000000000e+000f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(1);
  jd.lowerTranslation = -6.154879093170166e+000f;
  jd.upperTranslation = 1.008777618408203e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorForce = 0.000000000000000e+000f;
  joints[18] = m_world->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[4];
  jd.bodyB = bodies[17];
  jd.collideConnected = bool(1);
  jd.localAnchorA.Set(1.495088100433350e+000f, 5.568014621734619e+000f);
  jd.localAnchorB.Set(6.357848644256592e-001f, -5.262904614210129e-002f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  joints[19] = m_world->CreateJoint(&jd);
}
{
  b2RevoluteJointDef jd;
  jd.bodyA = bodies[43];
  jd.bodyB = bodies[2];
  jd.collideConnected = bool(0);
  jd.localAnchorA.Set(-7.294950541108847e-003f, 3.572863936424255e-001f);
  jd.localAnchorB.Set(7.294473703950644e-003f, -3.572863936424255e-001f);
  jd.referenceAngle = 0.000000000000000e+000f;
  jd.enableLimit = bool(0);
  jd.lowerAngle = 0.000000000000000e+000f;
  jd.upperAngle = 0.000000000000000e+000f;
  jd.enableMotor = bool(0);
  jd.motorSpeed = 0.000000000000000e+000f;
  jd.maxMotorTorque = 0.000000000000000e+000f;
  joints[20] = m_world->CreateJoint(&jd);
}
b2Free(joints);
b2Free(bodies);
joints = NULL;
bodies = NULL;

}
#endif
