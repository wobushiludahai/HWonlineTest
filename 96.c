
/**
 * @description: 表示数字
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[1000];
int testlen;
int flag = 0;

int main(void)
{
    while(scanf("%s", testbuf) != EOF)
    {
        testlen = strlen(testbuf);
        flag = 0;
        for(int i = 0; i < testlen; i++)
        {
            if((testbuf[i] >= '0')&&(testbuf[i] <= '9'))
            {
                if(flag == 0)
                {
                    flag = 1;
                    printf("*", testbuf[i]);
                }
                printf("%c", testbuf[i]);
            }
            else
            {
                if(flag == 1)
                {
                    flag = 0;
                    printf("*");
                }
                printf("%c", testbuf[i]);
            }
        }
        if(flag == 1)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
