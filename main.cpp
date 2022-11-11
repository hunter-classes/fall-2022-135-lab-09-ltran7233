#include <iostream>


#include "funcs.h"

int main()
{
	Coord3D pointP = {10, 20, 30};
	Coord3D pointQ = {-20, 21, -22};

	std::cout << "Task A: " << std::endl;
	std::cout << length(&pointP) << std::endl; // would print 37.4166
	
	std::cout << "\nTask B: " << std::endl;
	std::cout << "Address of P: " << &pointP << std::endl;
	std::cout << "Address of Q: " << &pointQ << std::endl;
	Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
	std::cout << "ans = " << ans << std::endl << std::endl;
	
	Coord3D pos = {0, 0, 100.0};
	Coord3D vel = {1, -5, 0.2}; // x, y, z components of the velocity
	move(&pos, &vel, 2.0); // object pos gets changed
	std::cout << "Task C: " << std::endl;
	std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl; // prints: 2 -10 100.4
	
	double x, y, z;
	x = 5;
	y = 10;
	z = 15;
	Coord3D *ppos = createCoord3D(x,y,z);
	
	x = 2;
	y = 4;
	z = 6;
	Coord3D *pvel = createCoord3D(x,y,z);
	move(ppos, pvel, 10.0);
	std::cout << "\nTask E: " << std::endl;
	std::cout << "Coordinates after 10 seconds: " << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;

	deleteCoord3D(ppos); // release memory
	deleteCoord3D(pvel);
	return 0;
}
