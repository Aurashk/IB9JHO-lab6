#pragma once

class Point
{
// this isn't essential as the default is private
private:
	double m_x;
	double m_y;

// Everything declared public can be seen outside the class
public:
	// construct our Point
	Point(double x, double y);

	// recover x-coordinate
	double x() const;

	// recover y-coordinate
	double y() const;

	// calculate the R2 norm
	double compute_norm() const;

	// print out information about the point
	void info() const;

	// Add a point to this point and return the result
	Point add(const Point* p) const;

	// Subtract a point from this point and return the result
	Point subtract(const Point* p) const;
};
