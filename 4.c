/**
 * @description: 连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组；
 * 长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。 
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char testbuf[105] = {0};
int testsize, testtemp;

int main(void)
{
    gets(testbuf);
    testsize = strlen(testbuf);
    testtemp = 0;
    while (1)
    {
        if(testsize > 8)
        {
            for(int i = 0; i < 8; i++)
            {
                printf("%c", testbuf[testtemp + i]);
            }
            printf("\n");
            testsize -= 8;
            testtemp += 8;
        }
        else
        {
            for(int i = 0; i < testsize; i++)
            {
                printf("%c", testbuf[testtemp + i]);
            }
            for(int i = 0; i < 8 - testsize; i++)
            {
                printf("0");
            }
            printf("\n");
            break;
        }
    }

    gets(testbuf);
    testsize = strlen(testbuf);
    testtemp = 0;
    while (1)
    {
        if(testsize > 8)
        {
            for(int i = 0; i < 8; i++)
            {
                printf("%c", testbuf[testtemp + i]);
            }
            printf("\n");
            testsize -= 8;
            testtemp += 8;
        }
        else
        {
            for(int i = 0; i < testsize; i++)
            {
                printf("%c", testbuf[testtemp + i]);
            }
            for(int i = 0; i < 8 - testsize; i++)
            {
                printf("0");
            }
            break;
        }
    }


    return 0;
}