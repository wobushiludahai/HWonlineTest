
/**
 * @description: a template for test
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum;
int testbuf[1000];
int fuzhu[1000];
int max;

int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        for(int i = 0; i < testnum; i++)
        {
            scanf("%d", &testbuf[i]);
        }

        memcpy(fuzhu, testbuf, sizeof(testbuf));
        qsort(fuzhu, testnum, sizeof(int), cmp);
        max = 0;

        for(int i = 0; i < testnum; i++)
        {
            for(int j = 0; j < testnum; j++)
            {
                if(testbuf[i] == fuzhu[j])
                {
                    int temp = fuzhu[j];
                    int count = 0;
                    for(int k = j+1; k < testnum; k++)
                    {
                        if(fuzhu[k] != temp)
                        {
                            temp == fuzhu[k];
                            for(int q = i + 1; q < testnum; q++)
                            {
                                if(testbuf[q] == fuzhu[k])
                                {
                                    count++;
                                    break;
                                }
                            }
                        }
                    }

                    if(count > max)
                    {
                        max = count;
                    }
                }
            }
        }

        printf("%d\n", max+1);
    }

    return 0;
}
