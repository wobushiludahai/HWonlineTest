
/**
 * @description: 输入一行字符，分别统计出包含英文字母、空格、数字和其它字符的个数
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[10000] = {0};
int testlen;
int zimunum;
int shuzinum;
int konggenum;
int othernum;

int main(void)
{
    while(gets(testbuf) != NULL)
    {
        zimunum = 0;
        konggenum = 0;
        shuzinum = 0;
        othernum = 0;
        testlen = strlen(testbuf);
        for(int i = 0; i < testlen; i++)
        {
            if(((testbuf[i] >= 'a')&&(testbuf[i] <= 'z'))||((testbuf[i] >= 'A')&&(testbuf[i] <= 'Z')))
            {
                zimunum++;
            }
            else if((testbuf[i] >= '0')&&(testbuf[i] <= '9'))
            {
                shuzinum++;
            }
            else if(testbuf[i] == ' ')
            {
                konggenum++;
            }
            else
            {
                othernum++;
            }
        }
        printf("%d\n%d\n%d\n%d\n",zimunum,konggenum,shuzinum,othernum);
    }

    return 0;
}
