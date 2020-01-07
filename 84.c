
/**
 * @description: 统计大写字母个数
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[1000] = {0};
int testlen;
int testcount;

int main(void)
{
    while(scanf("%s", testbuf) != EOF)
    {
        testlen = strlen(testbuf);
        testcount = 0;
        for(int i = 0; i < testlen; i++)
        {
            if((testbuf[i] >= 'A')&&(testbuf[i] <= 'Z'))
            {
                testcount++;
            }
        }

        printf("%d\n", testcount);
    }

    return 0;
}
