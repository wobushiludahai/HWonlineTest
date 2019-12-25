
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
char testbuf[100] = {0};
int countbuf[100] = {0};
int tempbuf[26] = {0};
int testlen;
int testresult;

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        for(int i = 0; i < testnum; i++)
        {
            scanf("%s", testbuf);
            memset(tempbuf, 0, 26);
            memset(countbuf, 0, 100);
            testlen = strlen(testbuf);
            testresult = 0;
            
            for(int j = 0; j < testlen; j++)
            {
                if((testbuf[j] >= 'a')&&(testbuf[j] <= 'z'))
                {
                    tempbuf[testbuf[i] - 'a']++;
                }
                else
                {
                    tempbuf[testbuf[i] - 'A']++;
                }
            }

            for(int j = 0; j < 26; j++)
            {
                if(tempbuf[j] != 0)
                {
                    countbuf[tempbuf[j]]++;
                }
            }
        }
    }

    return 0;
}
