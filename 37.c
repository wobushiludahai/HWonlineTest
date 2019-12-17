
/**
 * @description: 统计每个月兔子的总数
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int gettotal(int month)
{
    if(month >= 3)
    {
        return (gettotal(month - 1) + gettotal(month - 2));        
    }
    else if(month > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int testnum;

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        printf("%d\n", gettotal(testnum));
    }

    return 0;
}
