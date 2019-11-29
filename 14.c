/**
 * @description: 输入第一行为一个正整数n(1≤n≤1000),下面n行为n个字符串(字符串长度≤100),字符串中只含有大小写字母。
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
    char testbuf[100];
}test;

test array[1000] = {0};
int testnum;

int cmp(const void *a, const void *b)
{
    test *temp1, *temp2;
    temp1 = (test *)a;
    temp2 = (test *)b;

    return strcmp((char *)(&temp1->testbuf[0]), (char *)(&temp2->testbuf[0]));
}

int main(void)
{
    scanf("%d", &testnum);
    for(int i = 0; i < testnum; i++)
    {
        scanf("%s", &array[i].testbuf[0]);
    }

    qsort(array, testnum,sizeof(test), cmp);

    for(int i = 0; i < testnum; i++)
    {
        printf("%s\n", &array[i].testbuf[0]);
    }

    return 0;
}
