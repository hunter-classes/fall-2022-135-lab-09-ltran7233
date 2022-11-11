#include <iostream>
#include <cmath>
#include "funcs.h"

// add functions here
double length(Coord3D *p)
{
	double sum = 0.0;
	sum += pow(p->x,2);
	sum += pow(p->y,2);
	sum += pow(p->z,2);
	return sqrt(sum);
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
	double first = length(p1);
	double second = length(p2);
	
	if (first > second)
	{
		return p1;
	}
	else
	{
		return p2;
	}
}

void move(Coord3D *ppos, Coord3D *pvel, double dt)
{
	ppos->x = ppos->x + pvel->x * dt;
	ppos->y = ppos->y + pvel->y * dt;
	ppos->z = ppos->z + pvel->z * dt;
}
