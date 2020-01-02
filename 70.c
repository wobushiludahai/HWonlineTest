
/**
 * @description: 矩阵乘法计算量估算
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
}tagtest;

tagtest testbuf[100] = {0};
char cmdbuf[100] = {0};
int cmdlen;
int testnum;
int result;

int temphandle(int a, int b)
{
    int temp;
    int temp1;

    if(a!=0)
    {
        if(cmdbuf[a-1] == '(')
        {
            temp1 = cmdbuf[b+1] - 'A';
            temp = testbuf[temp1].x * testbuf[temp1].y * testbuf[temp1 - 1].x;
            testbuf[temp1].x = testbuf[temp1 - 1].x;
            // printf("temp:%d\n", temp);
            if((b+2)!= (cmdlen - 1))
            return (temp + temphandle(a-1, b+2));
            else
            return temp;
        }
        else
        {
            temp1 = cmdbuf[a-1] - 'A';
            temp = testbuf[temp1].x * testbuf[temp1].y * testbuf[temp1 + 1].y;
            testbuf[temp1].y = testbuf[temp1 + 1].y;
            // printf("temp:%d\n", temp);
            if((a - 2)!=0)
            return (temp + temphandle(a-2, b+1));
            else
            return temp;
        }
    }

    return 0;
}

void handle(void)
{
    int tempcal = 0;
    int temp;
    result = 0;

    for(int i = 0; i < cmdlen; i++)
    {
        if(cmdbuf[i] == '(')
        {
            temp = i;
        }
    }

    tempcal = testbuf[cmdbuf[temp+1] - 'A'].x * testbuf[cmdbuf[temp+1] - 'A'].y * \
                testbuf[cmdbuf[temp+2] - 'A'].y;
    // printf("tempcal:%d\n", tempcal);
    testbuf[cmdbuf[temp+1] - 'A'].y = testbuf[cmdbuf[temp+2] - 'A'].y;
    testbuf[cmdbuf[temp+2] - 'A'].x = testbuf[cmdbuf[temp+1] - 'A'].x;

    result = tempcal + temphandle(temp, temp+3);
}

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        for(int i = 0; i < testnum; i++)
        {
            scanf("%d%d\n", &testbuf[i].x, &testbuf[i].y);
        }
        gets(cmdbuf);
        cmdlen = strlen(cmdbuf);
        handle();
        printf("%d\n", result);
    }

    return 0;
}
