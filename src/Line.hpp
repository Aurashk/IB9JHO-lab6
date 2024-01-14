#pragma once
#include "Point.hpp"

class Line
{
	Point m_p1;
	Point m_p2;

public:

	const Point* p1() const;

	const Point* p2() const;

	Line(const Point* p1, const Point* p2);

	double length() const;

};