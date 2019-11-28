/**
 * @description: 写出一个程序，接受一个十六进制的数，输出该数值的十进制表示。（多组同时输入 ）
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char testbuf[105] = {0};
unsigned long long test = 0;
int testsize = 0, testtemp;
char chartemp;

int main(void)
{
    while(gets(testbuf))
    {
        testsize = strlen(testbuf);
        test = 0;
        for(int i = 2; i < testsize; i++)
        {
            if((testbuf[i] >= '0')&&(testbuf[i] <= '9'))
            {
                testtemp = testbuf[i] - '0';
            }
            else if((testbuf[i] >= 'A')&&(testbuf[i] <= 'F'))
            {
                testtemp = testbuf[i] - 'A' + 10;
            }
            else if((testbuf[i] >= 'a')&&(testbuf[i] <= 'f'))
            {
                testtemp = testbuf[i] - 'a' + 10;
            }
            test = test*16 + testtemp;
        }
        testsize = 0;
        printf("%lld\n", test);
    }

    return 0;
}
