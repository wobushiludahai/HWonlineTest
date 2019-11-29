/**
 * @description: 输入一个整数，将这个整数以字符串的形式逆序输出。
 * 程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[100];
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
