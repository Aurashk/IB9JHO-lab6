#include "Point.hpp"
#include <iostream>
#include <math.h> // for sqrt

Point::Point(double x, double y)
  : m_x(x), m_y(y)
{}

double Point::x() const
{
  return m_x;
}

double Point::y() const
{
  return m_y;
}

double Point::compute_norm() const
{
  return sqrt(m_x * m_x + m_y * m_y);
}

void Point::info() const
{
  std::cout << "The point is (" << m_x << "," << m_y << ") " <<
    "with a norm of " << compute_norm() << std::endl;
}

Point Point::add(const Point* p) const
{
  return Point(m_x + p->m_x, m_y + p->m_y);
}

Point Point::subtract(const Point* p) const
{
  return Point(m_x - p->m_x, m_y - p->m_y);
}
