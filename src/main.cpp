#include <iostream>
#include "Point.hpp"
#include "Line.hpp"
#include "Triangle.hpp"

int main()
{
	Point a(1.0, 2.0);
	std::cout << "Point: " << a.x() << a.y() << std::endl;
}
