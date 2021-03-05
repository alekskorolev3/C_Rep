#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include "main.h"

int main() {
    double x = 0, e = 0;
    int n = 2;
    printf ("Enter 'x' value\n");
    x = CliReadDouble();
    printf ("Enter measurement uncertainty 'e' \n");
    e = CliReadDouble();
    double sum = x;
    double present = x;
    printf (" Sin(x)   Decomp      N \n");
    while (fabs(Expr(n, x, &sum, &present) - sin(x)) >= e)
    {
        printf ("%f %f %d %s", sin(x), sum, n, "\n");
        n++;
    }
    printf ("%f %f %d %s", sin(x), sum, n, "\n");
    printf ("%s %d %s%lf%s %lf", "So, at value N, equal", n, "the expression under study differs from sin(", x, ") less than measurement uncertainty", e);
}

double Expr (int n, double x, double* sum, double* present)
{
    *present = *present * (-pow(x, 2))/(2*(2*n - 1)*(n - 1));
    *sum = *sum + *present;
    return *sum;
}

double CliReadDouble ()
{
    char c[100];
    bool check = true;
    while (check)
    {
        fgets (c,100, stdin);
        fflush(stdin);

        int i = 0;
        int DotCount = 0;
        if (c[0] == '\n' || c[0] == '.')
        {
            printf("Please, enter the correct value \n");
            continue;
        }
        do
        {
            if (!isdigit(c[i]))
            {
                if (c[i] == '\n')
                {
                    check = false;
                    break;
                }
                if (c[i] == '.')
                {
                    DotCount++;
                    if (DotCount > 1)
                    {
                        printf("Please, enter the correct value \n");
                        break;
                    }
                    continue;
                }
                printf("Please, enter the correct value \n");
                break;
            }
        } while (c[i++] != '\n');
    }
    return atof(c);
}
