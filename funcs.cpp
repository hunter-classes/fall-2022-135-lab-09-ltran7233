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
