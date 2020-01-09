
/**
 * @description: 记负均正
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
    while(scanf("%d", &testnum) != EOF)
    {
        sum = 0;
        count = 0;
        zhengshucount = 0;
        for(int i = 0; i < testnum; i++)
        {
            scanf("%d", &temp);
            if(temp < 0)
            {
                count++;
            }
            else if(temp > 0)
            {
                zhengshucount++;
                sum += temp;
            }
        }

        printf("%d %.1f\n", count, (float)((float)sum/(zhengshucount)));
    }

    return 0;
}
