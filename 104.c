
/**
 * @description: 字符串分割
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum;
char testbuf[101];
int testlen;

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        for(int i = 0; i < testnum; i++)
        {
            scanf("%s", testbuf);
            testlen = strlen(testbuf);
            if(testlen < 8)
            {
                for(int j = 0; j < 8; j++)
                {
                    if(j < testlen)
                    {
                        printf("%c", testbuf[j]);
                    }
                    else
                    {
                        printf("0");
                    }
                }
                printf("\n");
            }
            else if(testlen >= 8)
            {
                int count = testlen/8;
                int count1 = testlen%8;
                for(int k = 0;k < count;k++)
                {
                    for (int j = 0;j < 8;j++)
                    {
                        printf("%c",testbuf[j + k*8]);
 
                    }
                    printf("\n");
                }

                if ((count1 < 8) && (count1 > 0))
                {
                    for(int j = testlen - count1;j<testlen;j++)
                    {
                        printf("%c",testbuf[j]);
                    }
                    for(int j = count1;j < 8;j++)
                    {
                        printf("%c",'0');
                    }
                    printf("\n");
                }
            }
        }
    }

    return 0;
}