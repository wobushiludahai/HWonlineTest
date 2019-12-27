
/**
 * @description: 输出单向链表中倒数第K个节点
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum;
int testbuf[1000];
int testtemp;

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        for(int i = 0; i < testnum; i++)
        {
            scanf("%d", &testbuf[i]);
        }
        scanf("%d", &testtemp);
        printf("%d\n", testbuf[testnum - testtemp]);
    }

    return 0;
}
