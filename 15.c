/**
 * @description: 输入一个int型的正整数，计算出该int型数据在内存中存储时1的个数。
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int test;
int count = 0;

int main(void)
{
    scanf("%d", &test);

    while(test > 0)
    {
        if(test%2 == 0)
        {
            test /= 2;
        }
        else
        {
            count++;
            test /= 2;
        }
    }
    printf("%d", count);

    return 0;
}
