
/**
 * @description: 字符串通配符
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf1[100];
char testbuf2[100];

int judge(char *buf1, char *buf2)
{
    int len1 = strlen(buf1);
    int len2 = strlen(buf2);
    int temp = 0;

    for(int i = 0; i < len1; i++)
    {
        if(buf1[temp] == buf2[i])
        {
            temp++;
        }
        else
        {
            if(buf1[temp] == '*')
            {
                //贪婪匹配
                if((buf1[temp+1] == buf2[i])&&(buf1[temp+1]!=buf2[i+1]))
                {   //有个bug
                    temp += 2;
                }
            }
            else if(buf1[temp] == '?')
            {
                temp++;
            }
            else
            {
                return 0;
            }
        }
    }

    return 1;
}

int main(void)
{
    while(scanf("%s%s", testbuf1, testbuf2) != EOF)
    {
        if(judge(testbuf1, testbuf2))
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
