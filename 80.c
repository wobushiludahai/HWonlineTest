
/**
 * @description: 整形数组合并
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum1, testnum2;
int testbuf1[10000], testbuf2[10000];
int temp;

int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    while(scanf("%d", &testnum1) != EOF)
    {
        for(int i = 0; i < testnum1; i++)
        {
            scanf("%d", &testbuf1[i]);
        }
        scanf("%d", &testnum2);
        for(int i = 0; i < testnum2; i++)
        {
            scanf("%d", &testbuf2[i]);
        }
        qsort(testbuf1, testnum1, sizeof(int), cmp);
        qsort(testbuf2, testnum2, sizeof(int), cmp);

        int i = 0, j = 0;
        if(testbuf1[i] < testbuf2[j])
        {
            printf("%d", testbuf1[i]);
            temp = testbuf1[i];
            i++;
        }
        else
        {
            printf("%d", testbuf2[j]);
            temp = testbuf2[j];
            j++;
        }

        while(1)
        {
            if((i < testnum1)&&(j < testnum2))
            {
                if(testbuf1[i] < testbuf2[j])
                {
                    if(testbuf1[i] < temp)
                    {
                        printf("%d", testbuf1[i++]);
                    }
                    else if(testbuf1[i] > temp)
                    {
                        temp = testbuf1[i];
                        printf("%d", testbuf1[i++]);
                    }
                    else
                    {
                        i++;
                    }
                }
                else
                {
                    if(testbuf2[j] < temp)
                    {
                        printf("%d", testbuf2[j++]);
                    }
                    else if(testbuf2[j] > temp)
                    {
                        temp = testbuf2[j];                    
                        printf("%d", testbuf2[j++]);
                    }
                    else
                    {
                        j++;
                    }
                }
            }
            else if(i < testnum1)
            {
                if(testbuf1[i] < temp)
                {
                    printf("%d", testbuf1[i++]);
                }
                else if(testbuf1[i] > temp)
                {
                    temp = testbuf1[i];
                    printf("%d", testbuf1[i++]);
                }
                else
                {
                    i++;
                }
            }
            else if(j < testnum2)
            {
                if(testbuf2[j] < temp)
                {
                    printf("%d", testbuf2[j++]);
                }
                else if(testbuf2[j] > temp)
                {
                    temp = testbuf2[j];                    
                    printf("%d", testbuf2[j++]);
                }
                else
                {
                    j++;
                }
            }
            else
            {
                break;
            }
        }

        printf("\n");
    }

    return 0;
}
