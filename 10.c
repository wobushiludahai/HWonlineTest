/**
 * @description: 编写一个函数，计算字符串中含有的不同字符的个数。字符在ACSII码范围内(0~127)，
 * 换行表示结束符，不算在字符里。不在范围内的不作统计。
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[100000];
int test;
int resultbuf[128] = {0};
int result = 0;

int main(void)
{
    gets(testbuf);
    test = strlen(testbuf);
    for(int i = 0; i < test; i++)
    {
        if(resultbuf[testbuf[i]] == 0)
        {
            resultbuf[testbuf[i]] = 1;
            result++;
        }
    }

    printf("%d", result);

    return 0;
}
