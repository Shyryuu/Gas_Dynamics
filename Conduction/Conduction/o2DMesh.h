#pragma once

#include <vector>
#include <cmath>

// Triangular unstructured cells.
struct s2DPoint
{
	static double distance(s2DPoint _p1, s2DPoint _p2);

	double x, y;
};

struct s2DLine
{
	double length();

	s2DPoint* vertex[2];
};

struct s2DCell
{
	s2DPoint pCenter;
	s2DPoint* vertex[3];
	s2DCell* neighbours[3];
};

class o2DMesh
{
private:
	std::vector<s2DPoint> pointMesh;
	std::vector<s2DLine> lineMesh;
	std::vector<s2DCell> cellMesh;

public:

};
