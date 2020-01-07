
/**
 * @description: 求最大连续bit数
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum;
int max;
int temp;
int flag;
int testbuf[1000] = {0};
int count;

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        count = 0;
        while(testnum)
        {
            if(testnum % 2 == 1)
            {
                testbuf[count++] = 1;
            }
            else
            {
                testbuf[count++] = 0;
            }
            testnum /= 2;
        }

        flag = 0;
        max = 1;
        temp = 1;
        for(int i = count - 1; i >= 0; i--)
        {
            if(testbuf[i] == 1)
            {
                if(flag == 1)
                {
                    temp++;
                    if(temp > max)
                    {
                        max = temp;
                    }
                }
                flag = 1;
            }
            else
            {
                temp = 1;
                flag = 0;
            }
        }
        printf("%d\n", max);
    }    

    return 0;
}
