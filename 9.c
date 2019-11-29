/**
 * @description: 输入一个int型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int test;
int temp;
int testbuf[10] = {0};

int main(void)
{
    scanf("%d", &test);
    

    while(test)
    {
        temp = test % 10;
        if(testbuf[temp] == 0)
        {
            printf("%d", temp);
            testbuf[temp] = 1;
        }
        test /= 10;
    }

    return 0;
}
