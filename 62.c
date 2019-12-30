
/**
 * @description: 查找输入整数二进制数中1的个数
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum;

int cal(int num)
{
    int count = 0;
    int temp = num;
    while (temp)
    {
        if(temp%2 == 1)
        {
            count++;
        }
        temp /= 2;
    }
    return count;
}

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        printf("%d\n", (cal(testnum)));
    }

    return 0;
}
