
/**
 * @description: 多线程
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int testnum;

    while(scanf("%d", &testnum) != EOF)
    {
        for(int i = 0; i <testnum; i++)
        {
            printf("ABCD");
        }
        printf("\n");
    }

    return 0;
}
