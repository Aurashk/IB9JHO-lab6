#define CATCH_CONFIG_MAIN
#include "catch.hpp"

extern "C"
{
#include "binomial_expectation.h"
}

// error tolerance for floating point comparisons
#define EPSILON 1e-14

void error(double* fxn, double p, unsigned int n)
{
    double recursion_answer = binomial_expectation_recursion(fxn, p, n);
    double induction_answer = binomial_expectation_loop(fxn, p, n);

    // check answers are equal within the tolerance epsilon
    REQUIRE(induction_answer == Approx(recursion_answer).epsilon(EPSILON));
}

void populate_test_arrays(double* linear, double* quadratic, double* quartic, unsigned int n)
{
    for (unsigned int i = 0; i < n + 1; ++i)
    {
        linear[i] = (double) i - (double) n / 2.0;
        quadratic[i] = linear[i] * linear[i];
        quartic[i] = quadratic[i] * quadratic[i];
    }
}

TEST_CASE("recursion vs loop depth 1", "[tests]")
{
    const unsigned int n = 1;
	double p = 0.5;
	double* linear = (double*) malloc((n + 1) * sizeof(double));
	double* quadratic = (double*) malloc((n + 1) * sizeof(double));
	double* quartic = (double*) malloc((n + 1) * sizeof(double));

    populate_test_arrays(linear, quadratic, quartic, n);
    
    error(linear, p, n);
    error(quadratic, p, n);
    error(quartic, p, n);

	free(linear);
	free(quadratic);
	free(quartic);
}

TEST_CASE("recursion vs loop depth 3", "[tests]")
{
    const unsigned int n = 3;
	double p = 0.5;
	double* linear = (double*) malloc((n + 1) * sizeof(double));
	double* quadratic = (double*) malloc((n + 1) * sizeof(double));
	double* quartic = (double*) malloc((n + 1) * sizeof(double));

    populate_test_arrays(linear, quadratic, quartic, n);
    
    error(linear, p, n);
    error(quadratic, p, n);
    error(quartic, p, n);

	free(linear);
	free(quadratic);
	free(quartic);
}

