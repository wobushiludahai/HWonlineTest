
/**
 * @description: 输入n个整数，输出其中最小的K个
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testbuf[1000] = {0};
int N,K;

int cmp(const void *a, const void *b)
{
    return(*(int *)a - *(int *)b);
}

int main(void)
{
    while(scanf("%d %d", &N, &K)!= EOF)
    {
        for(int i = 0; i < N; i++)
        {
            scanf("%d", &testbuf[i]);
        }

        qsort(testbuf, N, sizeof(int), cmp);
        for(int i = 0; i < K; i++)
        {
            printf("%d ", testbuf[i]);
        }
        printf("\n");
    }

    return 0;
}
