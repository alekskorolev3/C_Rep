#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include "main.h"
void test()
{
    assert (UpCheck(123)==true);
    assert (UpCheck(10)==false);
    assert (UpCheck(1234)==true);
    assert (UpCheck(0)==false);
    assert (UpCheck(567)==true);
    assert (UpCheck(11)==false);
    assert (UpCheck(1023)==false);
    assert (DownCheck(321)==true);
    assert (DownCheck(654)==true);
    assert (DownCheck(987)==true);
    assert (DownCheck(65)==true);


}
#undef main
int main()
{
    test();
}

