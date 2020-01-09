
/**
 * @description: 输入整型数组和排序标识，对其元素按照升序或降序进行排序
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum;
int testbuf[1000];
int flag;

int cmp1(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int cmp2(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        for(int i = 0; i < testnum; i++)
        {
            scanf("%d", &testbuf[i]);
        }

        scanf("%d",&flag);
        if(flag == 0)
        {
            qsort(testbuf, testnum, sizeof(int), cmp1);
        }
        else
        {
            qsort(testbuf, testnum, sizeof(int), cmp2);
        }

        for(int i = 0; i < testnum; i++)
        {
            printf("%d ", testbuf[i]);
        }
        printf("\n");
    }

    return 0;
}
