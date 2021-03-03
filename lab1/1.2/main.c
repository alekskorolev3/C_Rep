#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include "main.h"

int main() {

    int n = GetValue();
    int i = 10;
    while (i <= n)
    {

        if (UpCheck(i) == true || true == DownCheck(i))
        {
            printf ("%d%c", i, ' ');
        }
        i++;
    }
    return 0;
}

int GetValue ()
{
    char c[11];
    int n = 0;
    bool check = true;
    while (check)
    {
        fgets(c, 11, stdin);
        int i = 0;
        while (i < strlen(c) - 1)
        {
            if (!isdigit(c[i++]))
            {
                printf ("Error. You need to write integer value");
                check = true;
                fflush(stdin);
                break;
            }
            check = false;
        }
    }
    int i = (int)strlen(c) - 2;

    int k = 0;
    while (i > -1)
    {
        n += (c[k++] - '0') * (int)pow ((int)10, i--);

    }
    return n;
}

_Bool UpCheck (int n)
{
    while (n > 9)
    {
        if ((n % 10) - (n / 10 % 10) == 1)
        {
            n /= 10;
        }
        else return false;
    }
    return true;

}
_Bool DownCheck (int n)
{
    while (n > 9)
    {
        if ((n / 10 % 10) - (n % 10) == 1)
        {
            n /= 10;
        }
        else return false;
    }
    return true;

}
