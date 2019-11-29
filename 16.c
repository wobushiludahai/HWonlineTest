/**
 * @description: 购物单
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int N,m;
typedef struct
{
    int v;
    int p;
    int q;
}tagtest;

tagtest testbuf[61];

int main(void)
{
    scanf("%d %d", &N, &m);
    for(int i = 0; i < m; i++)
    {
        scanf("%d %d %d", &testbuf[i].v, &testbuf[i].p, &testbuf[i].q);
    }

    for(int i = 0; i < m; i++)
    {
        printf("%d %d %d", testbuf[i].v, testbuf[i].p, testbuf[i].q);
    }
    
    return 0;
}
