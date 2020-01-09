
/**
 * @description: 记负均正Ⅱ
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int count;
int sum;
int testnum;
int temp;
int zhengshucount;

int main(void)
{
    sum = 0;
    count = 0;
    zhengshucount = 0;

    while(scanf("%d", &temp) != EOF)
    {
        if(temp < 0)
        {
            count++;
        }
        else
        {
            zhengshucount++;
            sum += temp;
        }
    }
    printf("%d\n%.1f\n", count, (float)((float)sum/(zhengshucount)));

    return 0;
}
