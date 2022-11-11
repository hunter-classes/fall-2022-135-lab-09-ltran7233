#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("length() tests")
{
	Coord3D point1 = {5, 10, 15};
	Coord3D point2 = {2.2, 4.4, 6.6};
	Coord3D point3 = {1, 2, 3};
	
	CHECK(length(&point1)==18.7083);
	CHECK(length(&point2)==8.2316);
	CHECK(length(&point3)==3.7417);
}
