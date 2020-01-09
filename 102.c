
/**
 * @description: 字符统计
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[10000];
int testlen;
int recordbuf[128];
int max;

int main(void)
{
    while(scanf("%s", testbuf) != EOF)
    {
        testlen = strlen(testbuf);
        memset(recordbuf, 0, sizeof(recordbuf));
        max = 0;
        for(int i = 0; i < testlen; i++)
        {
            if((testbuf[i] >= 1)&&(testbuf[i] <= 127))
            {
                recordbuf[testbuf[i]]++;
                if(max < recordbuf[testbuf[i]])
                {
                    max = recordbuf[testbuf[i]];
                }
            }
        }

        for(int i = max; i > 0; i--)
        {
            for(int j = 1; j <= 127; j++)
            {
                if(recordbuf[j] == i)
                {
                    printf("%c", j);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
