
/**
 * @description: 等差数列
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum;

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        printf("%d\n", (1 + 3*testnum)*testnum/2);
    }

    return 0;
}
