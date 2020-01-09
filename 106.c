
/**
 * @description: 字符逆序
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testlen;
char testbuf[10000];

int main(void)
{
    while(gets(testbuf))
    {
        testlen = strlen(testbuf);
        for(int i = testlen - 1; i >= 0; i--)
        {
            printf("%c", testbuf[i]);
        }
        printf("\n");
    }

    return 0;
}
