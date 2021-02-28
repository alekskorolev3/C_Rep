#include <stdio.h>
#include <stdbool.h>
#include "main.h"

_Bool upcheck (int n)
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
_Bool downcheck (int n)
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
int main() {
    int n;
    scanf("%d", &n);
    int i = 10;
    while (i <= n)
    {

        if (upcheck(i) == true || downcheck(i) == true)
        {
            printf ("%d", i);
            printf ("%c", ' ');
        }
        i++;
    }
    return 0;
}
