
/**
 * @description: 找出字符串中第一个只出现一次的字符
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[1000] = {0};
int testlen;
int tempflag;
int i,j;

int main(void)
{
    while(scanf("%s", testbuf)!=EOF)
    {
        testlen = strlen(testbuf);
        for(i = 0; i < testlen; i++)
        {
            tempflag = 0;
            if(testbuf[i] != -1)
            {
                for(j = i+1; j < testlen; j++)
                {
                    if(testbuf[i] == testbuf[j])
                    {
                        tempflag = 1;
                        testbuf[j] = -1;
                    }
                }                
            }

            if((tempflag == 0)&&(testbuf[i] != -1))
            {
                printf("%c\n", testbuf[i]);
                break;
            }
        }

        if(i == testlen)
        {
            printf("-1\n");
        }
    }

    return 0;
}
