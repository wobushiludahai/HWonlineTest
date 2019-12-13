
/**
 * @description: 字符串合并处理
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

const char helper1[] = "0123456789abcdefABCDEF";
const char helper2[] = "084C2A6E195D3B7F5D3B7F";

int cmp(const void *a, const void *b)
{
    return(*(char *)a - *(char *)b);
}

void ProcessString(char* str1,char *str2,char * strOutput)
{
    char testtemp[2000] = {0};
    char teststr1[1000] = {0};
    char teststr2[1000] = {0};
    int templen;
    int temp1 = 0, temp2 = 0;

    strcpy(testtemp, str1);
    strcat(testtemp, str2);

    templen = strlen(testtemp);
    for(int i = 0; i < templen; i++)
    {
        if(i%2 == 0)
        {
            teststr1[temp1++] = testtemp[i];
        }
        else
        {
            teststr2[temp2++] = testtemp[i];
        }
    }
    qsort(teststr1, temp1, sizeof(char), cmp);
    qsort(teststr2, temp2, sizeof(char), cmp);
    temp1 = 0;
    temp2 = 0;
    for(int i = 0; i < templen; i++)
    {
        if(i%2 == 0)
        {
            testtemp[i] = teststr1[temp1++];
        }
        else
        {
            testtemp[i] = teststr2[temp2++];
        }
    }

    for(int i = 0; i < templen; i++)
    {
        for(int j = 0; j < 22; j++)
        {
            if(testtemp[i] == helper1[j])
            {
                testtemp[i] = helper2[j];
                break;
            }
        }
    }
    testtemp[templen] = '\0';
    puts(testtemp);
}

char testbuf1[1000] = {0};
char testbuf2[1000] = {0};
int main(void)
{

    while(scanf("%s", testbuf1) != EOF)
    {
        scanf("%s", testbuf2);
        ProcessString(testbuf1, testbuf2, testbuf2);
    }

    return 0;
}
