/**
 * @description: 明明想在学校中请一些同学一起做一项问卷调查，为了实验的客观性，他先用计算机生成了N个1到1000之间的随机整数（N≤1000），
 * 对于其中重复的数字，只保留一个，把其余相同的数去掉，不同的数对应着不同的学生的学号。然后再把这些数从小到大排序，按照排好的顺序去找
 * 同学做调查。请你协助明明完成“去重”与“排序”的工作(同一个测试用例里可能会有多组数据，希望大家能正确处理)。
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
int testnum = 0;
int cmp(const void *a, const void *b)
{
    return(*((int *)a) - *((int *)b));
}
int testbuf[1005] = {0};
int temp = 0;

int main(void)
{
    while(EOF !=(scanf("%d", &testnum)))
    {
        for(int i = 0; i < testnum; i++)
        {
            scanf("%d", &testbuf[i]);
        }
        qsort(testbuf, testnum, sizeof(int), cmp);
        for(int i = 0; i < testnum; i++)
        {
            if(temp != testbuf[i])
            {
                printf("%d\n", testbuf[i]);
            }
            temp = testbuf[i];
        }
    }

    return 0;
}