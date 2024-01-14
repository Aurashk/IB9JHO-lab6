#include "Triangle.hpp"

Triangle::Triangle(const Point* p1, const Point* p2, const Point* p3)
	:
	m_edge1(p1, p2),
	m_edge2(p2, p3),
	m_edge3(p3, p1)
{}

Triangle::Triangle(const Point* p, const Line* l)
	:
	m_edge1(*l),
	m_edge2(p, l->p1()),
	m_edge3(p, l->p2())
{}

double Triangle::perimeter()
{
	return m_edge1.length() + m_edge2.length() + m_edge3.length();
}
