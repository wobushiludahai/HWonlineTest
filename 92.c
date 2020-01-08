
/**
 * @description: 在字符串中找出连续最长的数字串
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[1000];
int testlen;
int temp, max;
int count;
int recordbuf[100];

int main(void)
{
    while(scanf("%s", testbuf) != EOF)
    {
        testlen = strlen(testbuf);
        temp = 0;
        max = 0;
        count = 0;
        for(int i = 0; i < testlen; i++)
        {
            if((testbuf[i] >= '0')&&(testbuf[i] <= '9'))
            {
                temp++;
            }
            else
            {
                if(temp > max)
                {
                    max = temp;
                    recordbuf[0] = i;
                    count = 1;
                }
                else if(temp == max)
                {
                    recordbuf[count++] = i;
                }
                temp = 0;
            }
        }

        if(temp != 0)
        {
            if(temp > max)
            {
                max = temp;
                recordbuf[0] = testlen;
                count = 1;
            }
            else if(temp == max)
            {
                recordbuf[count++] = testlen;
            }
        }

        for(int i = 0; i < count; i++)
        {
            for(int j = recordbuf[i] - max; j < recordbuf[i]; j++)
            {
                printf("%c", testbuf[j]);
            }
        }
        if(max!=0)
        {
            printf(",%d\n", max);
        }
    }

    return 0;
}
