#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"
#include <cmath>

// add your tests here

TEST_CASE("length() tests")
{
	Coord3D point1 = {5, 10, 15};
	Coord3D point2 = {2.2, 4.4, 6.6};
	Coord3D point3 = {1, 2, 3};
	
	CHECK(length(&point1)==sqrt((5*5) + (10*10) + (15*15)));
	CHECK(length(&point2)==sqrt((2.2*2.2) + (4.4*4.4) + (6.6*6.6)));
	CHECK(length(&point3)==sqrt((1*1) + (2*2) + (3*3)));
}

TEST_CASE("fartherFromOrigin() tests")
{
	Coord3D point1 = {5, 10, 15};
	Coord3D point2 = {2.2, 4.4, 6.6};
	Coord3D point3 = {1, 2, 3};
	
	CHECK(fartherFromOrigin(&point1, &point2)==&point1);
	CHECK(fartherFromOrigin(&point2, &point3)==&point2);
	CHECK(fartherFromOrigin(&point1, &point3)==&point1);
}

TEST_CASE("move() tests")
{
	Coord3D pos = {2, 4, 6};
	Coord3D vel = {9, -3, 2};
	move(&pos, &vel, 5.0);
	CHECK(pos.x == 47);
	CHECK(pos.y == -11);
	CHECK(pos.z == 16);
	
	Coord3D pos2 = {10, 5, 40};
	Coord3D vel2 = {-10, 2, 5};
	move(&pos2, &vel2, 2.0);
	CHECK(pos2.x == -10);
	CHECK(pos2.y == 9);
	CHECK(pos2.z == 50);
	
	Coord3D pos3 = {7, -14, 32};
	Coord3D vel3 = {-2, 6, 20};
	move(&pos3, &vel3, 10.0);
	CHECK(pos3.x == -13);
	CHECK(pos3.y == 46);
	CHECK(pos3.z == 232);
}

TEST_CASE("createCoord3D and deleteCoord3D tests")
{
	Coord3D *ppos = createCoord3D(68, 92, 39);
	Coord3D *pvel = createCoord3D(-24, 7, 15);
	
	CHECK(ppos->x == 68);
	CHECK(ppos->y == 92);
	CHECK(ppos->z == 39);
	
	CHECK(pvel->x == -24);
	CHECK(pvel->y == 7);
	CHECK(pvel->z == 15);
	
	move(ppos, pvel, 5.0);
	
	CHECK((*ppos).x == -52);
	CHECK((*ppos).y == 127);
	CHECK((*ppos).z == 114);
}
