#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Point.hpp"

TEST_CASE("adding a + a - a is a", "[tests]")
{
    Point a(1.0, 2.0);
	Point r1 = a.add(&a);
	Point r2 = r1.subtract(&a);
    REQUIRE(a.x() == r2.x());
    REQUIRE(a.y() == r2.y());
}
