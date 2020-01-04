
/**
 * @description: 超长正整数相加（类似于57题）
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char str1[1000];
char str2[1000];
char result[1000];
int count;
int len1, len2;
int flag;
int temp;

int main(void)
{
    while(scanf("%s%s", str1, str2) != EOF)
    {
        len1 = strlen(str1);
        len2 = strlen(str2);
        int i = len1 - 1, j = len2-1;
        flag = 0;
        count = 0;
        while(1)
        {
            if((i >= 0)&&(j >= 0))
            {
                if(flag == 1)
                {
                    flag = 0;
                    temp = str1[i] - '0' + str2[j] - '0' + 1;
                }
                else
                {
                    temp = str1[i] - '0' + str2[j] - '0';
                }
                if(temp > 9)
                {
                    flag = 1;
                }
                result[count++] = (temp%10) + '0';
                i--;
                j--;
            }
            else if(i >= 0)
            {
                while(i >= 0)
                {
                    if(flag == 1)
                    {
                        flag = 0;
                        temp = str1[i] - '0' + 1;
                    }
                    else
                    {
                        temp = str1[i] - '0';
                    }
                    if(temp > 9)
                    {
                        flag = 1;
                    }
                    result[count++] = (temp%10) + '0';
                    i--;
                }
                break;
            }
            else if(j >= 0)
            {
                while(j >= 0)
                {
                    if(flag == 1)
                    {
                        flag = 0;
                        temp = str2[j] - '0' + 1;
                    }
                    else
                    {
                        temp = str2[j] - '0';
                    }
                    if(temp > 9)
                    {
                        flag = 1;
                    }
                    result[count++] = (temp%10) + '0';
                    j--;
                }
                break;
            }
            else
            {
                break;
            }
        }
        if(flag == 1)
        {
            result[count++] = '1';
        }

        for(int i = count - 1; i >= 0; i--)
        {
            printf("%c", result[i]);
        }
        printf("\n");
    }

    return 0;
}
