
/**
 * @description: 计票统计
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum;
char testbuf[100][100];
int recordbuf[100];
int testnum1;
char tempbuf[100];
int count;

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        for(int i = 0; i < testnum; i++)
        {
            scanf("%s", &testbuf[i][0]);
        }

        scanf("%d", &testnum1);
        memset(recordbuf, 0, sizeof(recordbuf));
        count = 0;

        for(int i = 0; i < testnum1; i++)
        {
            scanf("%s", tempbuf);
            int j;
            for(j = 0; j < testnum; j++)
            {
                if(strcmp(tempbuf, &testbuf[j][0]) == 0)
                {
                    recordbuf[j]++;
                    break;
                }
            }

            if(j == testnum)
            {
                count++;
            }
        }

        for(int i = 0; i < testnum; i++)
        {
            printf("%s : %d\n",&testbuf[i][0], recordbuf[i]);
        }

        printf("Invalid : %d\n", count);
    }

    return 0;
}
