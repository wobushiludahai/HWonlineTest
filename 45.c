
/**
 * @description: 名字的漂亮度
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum;
char testbuf[100000] = {0};
int countbuf[100000] = {0};
int tempbuf[26] = {0};
int testlen;
int testresult;
int fuzhu;

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        for(int i = 0; i < testnum; i++)
        {
            scanf("%s", testbuf);
            memset(tempbuf, 0, sizeof(tempbuf));
            memset(countbuf, 0, sizeof(countbuf));
            testlen = strlen(testbuf);
            testresult = 0;
            fuzhu = 26;
            
            for(int j = 0; j < testlen; j++)
            {
                if((testbuf[j] >= 'a')&&(testbuf[j] <= 'z'))
                {
                    tempbuf[testbuf[j] - 'a']++;
                }
                else
                {
                    tempbuf[testbuf[j] - 'A']++;
                }
            }

            for(int j = 0; j < 26; j++)
            {
                if(tempbuf[j] != 0)
                {
                    countbuf[tempbuf[j]]++;
                }
            }

            for(int j = 99999; j >= 0; j--)
            {
                if(countbuf[j]!=0)
                {
                    for(int k = 0; k < countbuf[j]; k++)
                    {
                        testresult += (j * fuzhu);
                        fuzhu--;
                    }
                }
            }
            printf("%d\n", testresult);
        }
    }

    return 0;
}
