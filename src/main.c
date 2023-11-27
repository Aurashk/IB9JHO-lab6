#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "binomial_expectation.h"

int main()
{
	const unsigned int n = 100;
	double p = 0.5;
	double* linear = (double*) malloc((n + 1) * sizeof(double));
	double* quadratic = (double*) malloc((n + 1) * sizeof(double));
	double* quartic = (double*) malloc((n + 1) * sizeof(double));

	for (unsigned int i = 0; i < n + 1; ++i)
	{
		linear[i] = (double) i - (double) n / 2.0;
		quadratic[i] = linear[i] * linear[i];
		quartic[i] = quadratic[i] * quadratic[i];
	}
	printf("sd: %f\n", sqrt(n * 0.5 * (1.0 - 0.5)));
	
	printf("Induction method: %f\n", binomial_expectation_loop(linear, p, n));
	printf("Induction method: %f\n", binomial_expectation_loop(quadratic, p, n));
	// Integrate[x^4 1/(sqrt(2pi) * 5) * e^{-0.5 * (x / 5)^2 },{x,-infty,infty}]
	printf("Induction method: %f\n", binomial_expectation_loop(quartic, p, n));

	free(linear);
	free(quadratic);
	free(quartic);
	return 0;
}