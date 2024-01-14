#pragma once
#include "Point.hpp"
#include "Line.hpp"

class Triangle
{
	Line m_edge1;
	Line m_edge2;
	Line m_edge3;

public:
	Triangle(const Point* p1, const Point* p2, const Point* p3);

	Triangle(const Point* p, const Line* l);

	double perimeter();
};