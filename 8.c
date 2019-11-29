/**
 * @description: 数据表记录包含表索引和数值（int范围的整数），请对表索引相同的记录进行合并，即将相同索引的数值进行求和运算，输出按照key值升序进行输出。
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum;
int resultbuf[100000] = {0};
int tempa,tempb;

int main(void)
{
    scanf("%d", &testnum);

    for(int i = 0; i < testnum; i++)
    {
        scanf("%d %d", &tempa, &tempb);
        resultbuf[tempa] += tempb;
    }

    for(int i = 0; i < 100000; i++)
    {
        if(resultbuf[i]!=0)
        {
            printf("%d %d\n",i, resultbuf[i]);
        }
    }


    return 0;
}
