/**
 * @description: 简单密码
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[105] = {0};
int testlen;


int main(void)
{
    while(gets(testbuf))
    {
        testlen = strlen(testbuf);
        for(int i = 0; i < testlen; i++)
        {
            if((testbuf[i] >= 'A')&&(testbuf[i] <= 'Z'))
            {
                testbuf[i] ='a' + ((testbuf[i] - 'A' + 1)%26);
                continue;
            }

            if((testbuf[i] >= 'a')&&(testbuf[i] <= 'z'))
            {
                if((testbuf[i] <= 'c')) testbuf[i] = '2';
                else if ((testbuf[i] <= 'f')) testbuf[i] = '3';
                else if ((testbuf[i] <= 'i')) testbuf[i] = '4';
                else if ((testbuf[i] <= 'l')) testbuf[i] = '5';
                else if ((testbuf[i] <= 'o')) testbuf[i] = '6';
                else if ((testbuf[i] <= 's')) testbuf[i] = '7';
                else if ((testbuf[i] <= 'v')) testbuf[i] = '8';
                else testbuf[i] = '9';
                continue;
            }
        }
        printf("%s\n", testbuf);
    }

    return 0;
}
