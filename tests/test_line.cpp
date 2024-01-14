#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Line.hpp"

TEST_CASE("the length of a line to the origin is the same as the norm of a point from the origin", "[tests]")
{
	Point a(0.0, 0.0);
	Point b(2.0, 3.0);
	Line l(&a, &b);
    REQUIRE(l.length() == b.compute_norm());
}