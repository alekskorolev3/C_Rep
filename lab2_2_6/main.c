#include <stdio.h>
#include <math.h>

unsigned long long fact = 1;

unsigned long long Factorial (int n)
{
    if (n > 0)
    {
        fact *= n;
        n -= 1;
        Factorial(n);
    }
    else
    {
        return fact;
    }
}
double Formula (int n, double x)
{
    double nominator = pow (-1, n - 1) * pow (x, n * 2 - 1);
    double denominator = (double) Factorial (n * 2 - 1);
    double right_op = nominator / denominator;
    return right_op;
}
int main() {
    int n, x, e;
    double value = 0;
    scanf ("%d",&n);
    scanf ("%d",&x);
    while (n > 0)
    {
        value += Formula (n--, x);
    }
    printf("%f %f", sin(x), value);
}
