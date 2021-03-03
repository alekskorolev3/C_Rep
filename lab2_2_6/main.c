#include <stdio.h>
#include <math.h>
#include "main.h"

int main() {
    double x = 0, e = 0;
    int n = 2;
    printf ("Enter 'x' value and measurement uncertainty 'e' \n");
    scanf ("%lf",&x);
    scanf ("%lf", &e);
    double sum = x;
    double present = x;
    printf (" Sin(x)   Decomp      N \n");
    while (fabs(Expr(n, x, &sum, &present) - sin(x)) >= e)
    {
        printf ("%f %f %d %s", sin(x), sum, n, "\n");
        n++;
    }
    printf ("%f %f %d %s", sin(x), sum, n, "\n");
    printf ("%s %d %s %lf", "So, at value N, equal", n, "the expression under study differs from sin(x) less than measurement uncertainty", e);
}

double Expr (int n, double x, double* sum, double* present)
{
    *present = *present * (-pow(x, 2))/(2*(2*n - 1)*(n - 1));
    *sum = *sum + *present;
    return *sum;
}
