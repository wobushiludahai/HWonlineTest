
/**
 * @description: 单词倒排
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[10000] = {0};
int testlen;
int fuzhu;
int i;

int main(void)
{    
    while(gets(testbuf))
    {
        testlen = strlen(testbuf);
        i = testlen - 1;
        fuzhu = testlen;
        for(;i>=0;i--)
        {
            if((testbuf[i] > 'z')||(testbuf[i] < 'A')||((testbuf[i] > 'Z')&&(testbuf[i] < 'a')))
            {
                for(int j = i + 1; j < fuzhu; j++)
                {
                    printf("%c", testbuf[j]);
                }
                if((((testbuf[i+1] >= 'a')&&(testbuf[i+1] <= 'z'))||((testbuf[i+1] >= 'A')&&(testbuf[i+1] <= 'Z')))&&(i!=0))
                {
                    printf(" ");
                }

                fuzhu = i;
            }
        }

        if(((testbuf[0] >= 'a')&&(testbuf[0] <= 'z'))||((testbuf[0] >= 'A')&&(testbuf[0] <= 'Z')))
        {
            for(int j = 0; j < fuzhu; j++)
            {
                printf("%c", testbuf[j]);
            }
        }
    }

    return 0;
}
