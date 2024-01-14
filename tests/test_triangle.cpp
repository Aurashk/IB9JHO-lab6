#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Triangle.hpp"

TEST_CASE("Triangle perimeter correct for concrete example", "[tests]")
{
	Point a(1.0, 1.0);
	Point b(2.0, 1.0);
	Point c(1.0, 2.0);
	Triangle t1(&a, &b, &c);

    REQUIRE(t1.perimeter() == 1.0 + 1.0 + sqrt(2.0));
}

TEST_CASE("the length of a line to the origin is the same as the norm of a point from the origin", "[tests]")
{
	Point a(1.0, 1.0);
	Point b(2.0, 1.0);
	Point c(1.0, 2.0);
	Line ab(&a, &b);
    Triangle t1(&a, &b, &c);
	Triangle t2(&c, &ab);

	REQUIRE(t1.perimeter() == t2.perimeter());
}