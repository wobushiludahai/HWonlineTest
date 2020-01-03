
/**
 * @description: 公共字串计算   基于65.c更改
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf1[1000];
char testbuf2[1000];
int buflen1, buflen2;
int max = 0;
char *calbuf1;
char *calbuf2;

void testcal(char *buf1, int len1, char *buf2, int len2)
{
    int tempmax;
    int temp1;
    int temp2;

    for(int i = 0; i < len1; i++)
    {
        for(int j = 0; j < len2; j++)
        {
            if(buf1[i] == buf2[j])
            {
                tempmax = 1;
                temp1 = i + 1;
                temp2 = j + 1;
                while((temp1 < len1)&&(temp2 < len2))
                {
                    if(buf1[temp1] != buf2[temp2])
                    {
                        break;
                    }
                    tempmax++;
                    temp1++;
                    temp2++;
                }
                if(tempmax > max)
                {
                    max = tempmax;
                }
            }
        }
    }
}

int main(void)
{
    while(scanf("%s %s", testbuf1, testbuf2)!=EOF)
    {
        buflen1 = strlen(testbuf1);
        buflen2 = strlen(testbuf2);
        max = 0;
        if(buflen1 > buflen2)
        {
            calbuf1 = testbuf2;
            calbuf2 = testbuf1;
            testcal(calbuf1, buflen2, calbuf2, buflen1);
        }
        else
        {
            calbuf1 = testbuf1;
            calbuf2 = testbuf2;
            testcal(calbuf1, buflen1, calbuf2, buflen2);
        }

        printf("%d\n", max);
    }

    return 0;
}
