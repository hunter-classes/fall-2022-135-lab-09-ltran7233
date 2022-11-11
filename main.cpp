#include <iostream>


#include "funcs.h"

int main()
{
	Coord3D pointP = {10, 20, 30};
	Coord3D pointQ = {-20, 21, -22};
	Coord3D pos = {0, 0, 100.0};
	Coord3D vel = {1, -5, 0.2}; // x, y, z components of the velocity

	std::cout << length(&pointP) << std::endl; // would print 37.4166
	
	std::cout << "\nAddress of P: " << &pointP << std::endl;
	std::cout << "Address of Q: " << &pointQ << std::endl;
	Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
	std::cout << "ans = " << ans << std::endl << std::endl;
	
	move(&pos, &vel, 2.0); // object pos gets changed
	std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl; // prints: 2 -10 100.4
	return 0;
}
