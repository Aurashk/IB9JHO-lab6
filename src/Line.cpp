#include "Line.hpp"

const Point* Line::p1() const
{
	return &m_p1;
}

const Point* Line::p2() const
{
	return &m_p2;
}

Line::Line(const Point* p1, const Point* p2)
	:m_p1(*p1), m_p2(*p2)
{}

double Line::length() const
{
	Point sub = m_p1.subtract(&m_p2);
	return sub.compute_norm();
}
