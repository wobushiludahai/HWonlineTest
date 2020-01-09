
/**
 * @description: 求解立方根
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double testnum;
double i;
int flag;

int main(void)
{
    while(scanf("%lf", &testnum) != EOF)
    {
        flag = 0;
        if(testnum < 0)
        {
            flag = 1;
            testnum = -testnum;
        }

        for(i = 0; i*i*i < testnum; i+=0.05);

        if(flag == 0)
        {
            printf("%0.1lf\n",i);            
        }
        else
        {
            printf("%0.1lf\n",-i);            
        }

    }

    return 0;
}
