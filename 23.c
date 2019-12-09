
/**
 * @description: 删除字符串中出现次数最少的字符
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[25] = {0};
int recbuf[25] = {0};
int templen;
char temp;
int count;
int mincount = 0xffff;

int main(void)
{
    while (scanf("%s", testbuf)!=EOF)
    {
        templen = strlen(testbuf);
        for(int i = 0; i < templen; i++)
        {
            temp = testbuf[i];
            count = 0;
            for(int j = 0; j < templen; j++)
            {
                if(testbuf[j] == temp)
                {
                    count++;
                }
            }
            if(count < mincount)
            {
                mincount = count;
            }
            recbuf[i] = count;
        }

        for(int i = 0; i < templen; i++)
        {
            if(recbuf[i]!=mincount)
            {
                printf("%c", testbuf[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
