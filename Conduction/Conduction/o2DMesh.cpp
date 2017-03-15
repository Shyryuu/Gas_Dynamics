
#include "o2DMesh.h"

double s2DPoint::distance(s2DPoint _p1, s2DPoint _p2)
{
	return std::sqrt(pow((_p1.x-_p2.x),2)+pow((_p1.y-_p2.y),2));
}

double s2DLine::length()
{
	return s2DPoint::distance(*this->vertex[1],*this->vertex[2]);
}