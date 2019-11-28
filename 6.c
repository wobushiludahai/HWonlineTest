/**
 * @description: 输入一个正整数，按照从小到大的顺序输出它的所有质数的因子（如180的质数因子为2 2 3 3 5 ）
最后一个数后面也要有空格
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

long test;
int iszhishu(int a)
{
    int result = 1;

    for(int i = 2; i < sqrt(a); i++)
    {
        if(a%i == 0)
        {
            result = 0;
            break;
        }
    }

    return result;
}

int main(void)
{
    scanf("%ld", &test);
    while(1)
    {
        for(int i = 2; ;i++)
        {
            if(1 == iszhishu(i))
            {
                if(test%i == 0)
                {
                    printf("%d ", i);
                    test /= i;
                    if(test==1)
                    goto end;
                    break;
                }
            }
        }
    }
    end:


    return 0;
}
