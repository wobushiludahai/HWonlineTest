/**
 * @description: 写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串。
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[10000];
int test;


int main(void)
{
    gets(testbuf);
    test = strlen(testbuf);
    for(int i = test - 1; i >= 0; i--)
    {
        printf("%c", testbuf[i]);
    }

    return 0;
}
