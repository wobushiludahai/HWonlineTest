
/**
 * @description: 蛇形矩阵
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum;
int a,b;
int test,testbak;

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        test = 1;
        for(int i = 0; i < testnum; i++)
        {
            a = 0;
            b = i + 2;
            testbak = test;
            for(int j = i; j < testnum; j++)
            {
                printf("%d ", test);
                test += (b + a++);
            }
            printf("\n");
            test = i+1 + testbak;
        }
        
    }

    return 0;
}
