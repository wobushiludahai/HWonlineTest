
/**
 * @description: 参数解析
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[1000];
int testlen;
int count;
int temp = 0;

int main(void)
{
    while(gets(testbuf))
    {
        testlen = strlen(testbuf);
        count = 0;
        temp = 0;
        for(int i = 0; i < testlen; i++)
        {
            if(testbuf[i] == '"')
            {
                if(temp == 0)
                {
                    temp = 1;
                }
                else
                {
                    temp = 0;
                }
            }
            if((testbuf[i] == ' ')&&(temp == 0))
            {
                count++;
            }
        }

        printf("%d\n", (count+1));

        temp = 0;
        for(int i = 0; i < testlen; i++)
        {
            if(testbuf[i] == '"')
            {
                if(temp == 0)
                {
                    temp = 1;
                }
                else
                {
                    temp = 0;
                }
            }
            if((testbuf[i] == ' ')&&(temp == 0))
            {
                printf("\n");
            }
            else
            {
                printf("%c", testbuf[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
