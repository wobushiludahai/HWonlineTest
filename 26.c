
/**
 * @description: 字符串排序
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[1000] = {0};
char tempbuf[1000] = {0};
int templen;
int tempcount;

int main(void)
{
    while(gets(testbuf))
    {
        templen = strlen(testbuf);
        tempcount = 0;
        for(int i = 0; i < 26; i++)
        {
            for(int j = 0; j < templen; j++)
            {
                if((testbuf[j] == ('a' + i))||(testbuf[j] == ('A' + i)))
                {
                    tempbuf[tempcount++] = testbuf[j];
                }
            }
        }

        tempcount = 0;
        for(int i = 0; i < templen; i++)
        {
            if(((testbuf[i] >= 'a')&&(testbuf[i] <= 'z'))||((testbuf[i] >= 'A')&&(testbuf[i] <= 'Z')))
            {
                printf("%c",tempbuf[tempcount++]);
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
