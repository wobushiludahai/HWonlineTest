
/**
 * @description: 求最小公倍数
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum1, testnum2;

int gongbeishu(int num1, int num2)
{
    int temp1;
    int temp2;
    int temp;

    if(num1 > num2)
    {
        temp1 = num1;
        temp2 = num2;
    }
    else
    {
        temp1 = num2;
        temp2 = num1;
    }

    temp = temp2;
    while(1)
    {
        if(temp % temp1 == 0)
        {
            return temp;
        }

        temp += temp2;
    }

    // int temp;

    // temp = (num1 > num2 ? num1 : num2);

    // while(1)
    // {
    //     if((temp%num1 == 0)&&(temp % num2 == 0))
    //     {
    //         return temp;
    //     }
    //     temp++;
    // }
}

int main(void)
{
    while(scanf("%d%d", &testnum1, &testnum2) != EOF)
    {
        printf("%d\n", gongbeishu(testnum1, testnum2));
    }

    return 0;
}
