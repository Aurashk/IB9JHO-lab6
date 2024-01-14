#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double binomial_expectation_loop(double* fxn, double p, unsigned int n)
{
    double* arr = (double*) malloc((n + 1) * sizeof(double));
    
    // set up the base nodes
    for (unsigned int i = 0; i < n + 1; ++i)
        arr[i] = fxn[i];
        
    // loop through each depth
    for (int i = (int) n - 1; i >= 0; --i)
        // loop through each node at depth i
		for (unsigned int j = 0; j < (unsigned int) i + 1; ++j)
		    arr[j] = (1.0 - p) * arr[j] + p * arr[j + 1];
    
    double answer = arr[0];

    free(arr);
    
    return answer;
}

double binomial_expectation_recursion_h(unsigned int i, unsigned int j, double* fxn, double p, unsigned int n)
{
    if (i == n)
        return fxn[j];
    
    // if (i < n)
    return (1.0 - p) * binomial_expectation_recursion_h(i + 1, j, fxn, p, n) + p * binomial_expectation_recursion_h(i + 1, j + 1, fxn, p, n);
}

double binomial_expectation_recursion(double* fxn, double p, unsigned int n)
{
    return binomial_expectation_recursion_h(0, 0, fxn, p, n);
}