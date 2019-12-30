
/**
 * @description: DNA序列
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[1000] = {0};
int testnum;
int minposition;
int max;
int testlen;
int tempcount;


int main(void)
{
    while(scanf("%s %d", testbuf, &testnum) != EOF)
    {
        testlen = strlen(testbuf);
        max = 0;
        minposition = 0;
        for(int i = 0; i < (testlen - testnum + 1); i++)
        {
            tempcount = 0;
            for(int j = 0; j < testnum; j++)
            {
                if((testbuf[j+i] == 'G')||(testbuf[j+i] == 'C'))
                {
                    tempcount++;
                }
            }
            if(tempcount > max)
            {
                max = tempcount;
                minposition = i;
            }
        }

        for(int i = 0; i < testnum; i++)
        {
            printf("%c", testbuf[minposition+i]);
        }
        printf("\n");
    }

    return 0;
}