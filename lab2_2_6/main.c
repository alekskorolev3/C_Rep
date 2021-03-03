#include <stdio.h>
#include <math.h>


double Formula (int n, double x, double* sum, double* present)
{
    *present = *present * (-pow(x, 2))/(2*(2*n - 1)*(n - 1));
    *sum = *sum + *present;
    return *sum;
}
int main() {
    double x = 2, e = 0.0000001;
    //a

    int n = 2;
    /*scanf ("%f",&x);*/
    double sum = x;
    double present = x;

    while (fabs(Formula(n, x, &sum, &present) - sin(x)) >= e)
    {
        printf ("%f %f %d %s", sin(x), sum, n, "\n");
        n++;
    }

}
