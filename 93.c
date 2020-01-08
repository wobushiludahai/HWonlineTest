
/**
 * @description: 201301 JAVA题目0-1级
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int sum5, sum3;
int temp;
int count;
// int testbuf[1000];
// int testbuf2[1000];
// int fuzhubuf[10000];
int sum;
int testnum;

int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        sum5 = 0;
        sum3 = 0;
        count = 0;
        for(int i = 0; i < testnum; i++)
        {
            scanf("%d", &temp);
            if(temp % 3)
            {
                sum3 += temp;
            }
            else if(temp % 5)
            {
                sum5 += temp;
            }
            else
            {
                sum += temp;
                // testbuf[count++] = temp;
            }
        }

        if(sum>abs(sum3-sum5)&&(sum-abs(sum3-sum5))%2==0){
            printf("true");
            printf("\n");
        }
        else{
            printf("false");
            printf("\n");
        }


        // qsort(testbuf, count, sizeof(int), cmp);
        // memset(fuzhubuf, 0 , 10000*sizeof(int));

        // for(int i = 0; i < count; i++)
        // {

        // }

        // for()

        



    }

    return 0;
}