/**
 * @description: 将一个英文语句以单词为单位逆序排放。例如“I am a boy”，逆序排放后为“boy a am I”
所有单词之间用一个空格隔开，语句中除了英文字母外，不再包含其他字符
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[10000];
int test = 0;

int main(void)
{
    gets(testbuf);
    test = strlen(testbuf);

    for(int i = test - 1; i >= 0; i-- )
    {
        if(testbuf[i]==' ')
        {
            for(int j = i + 1; j < test; j++)
            {
                if(testbuf[j]!=' ')
                {
                    printf("%c", testbuf[j]);
                }
                else
                {
                    break;
                }
            }
            printf(" "); 
        }
    }

    for(int i = 0; i < test; i++)
    {
        if(testbuf[i]!=' ')
        {
            printf("%c", testbuf[i]);
        }
        else
        {
            break;
        }
    }

    return 0;
}
