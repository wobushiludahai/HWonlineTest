
/**
 * @description: 图片整理
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int cmp(const void *a, const void *b)
{
    return(*(char *)a - *(char *)b);
}

char testbuf[1100] = {0};
int testlen;

int main(void)
{
    while(scanf("%s", testbuf)!=EOF)
    {
        testlen = strlen(testbuf);
        qsort(testbuf, testlen, sizeof(char), cmp);
        printf("%s\n",testbuf);
    }

    return 0;
}
