#include <stdio.h>
#include <stdbool.h>


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
void main(void) {
    int n;
    scanf("%d", &n);
    int i = 10;
    for (i; i <= n; i++)
    {

        if (upcheck(i) == true || downcheck(i) == true)
        {
            printf ("%d", i);
            printf ("%c", ' ');
        }
    }
}