
/**
 * @description: 求小球落地5次后所经历的路程和第五次反弹的高度
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum;
double getgaodu(int num)
{
    if(num == 1)
    {
        return 1.0*testnum/2;
    }
    return((getgaodu(num - 1))/2);
}

double gettotal(int num)
{
    if(num == 1)
    {
        return testnum;
    }
    return (gettotal(num - 1) + 4*getgaodu(num));
}

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        printf("%g\n%g\n",(gettotal(5)), (getgaodu(5)));
    }

    return 0;
}
