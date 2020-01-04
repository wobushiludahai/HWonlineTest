
/**
 * @description: 字符串匹配
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf1[1000];
char testbuf2[1000];

int judge(void)
{
    int len1 = strlen(testbuf1);
    int len2 = strlen(testbuf2);
    int j;
    // int tempbuf[1000] = {0};

    for(int i = 0; i < len1; i++)
    {
        for(j = 0; j < len2; j++)
        {
            if(testbuf1[i] == testbuf2[j])
            {
                break;
            }
        }
        if(j == len2)
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    while(scanf("%s%s", testbuf1, testbuf2)!=EOF)
    {
        if(judge())
        {
            printf("true\n");
        }
        else
        {
            printf("false\n");
        }
    }

    return 0;
}
