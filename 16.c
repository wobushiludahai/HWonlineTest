/**
 * @description: 购物单
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX(a,b) a < b ? b : a

int N,m;
typedef struct
{
    int v;
    int p;
    int q;
}tagtest;

tagtest testbuf[61];
int temp[61][32001] = {0};

int main(void)
{
    scanf("%d %d", &N, &m);
    for(int i = 1; i <= m; i++)
    {
        scanf("%d %d %d", &testbuf[i].v, &testbuf[i].p, &testbuf[i].q);
    }

    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            if(testbuf[i].v > j)
            {
                temp[i][j] = temp[i - 1][j];
            }
            else
            {
                if(testbuf[i].q)        //附件
                {
                    if(testbuf[i].v + testbuf[testbuf[i].q].v > j)
                    {
                        temp[i][j] = temp[i - 1][j];
                    }
                    else
                    {
                        temp[i][j] = MAX(temp[i - 1][j], temp[i - 1][j - testbuf[i].v - testbuf[testbuf[i].q].v] + \
                                    testbuf[i].v*testbuf[i].p + testbuf[testbuf[i].q].v*testbuf[testbuf[i].q].p);
                    }
                }
                else                    //主件
                {
                    temp[i][j] = MAX(temp[i - 1][j], temp[i - 1][j - testbuf[i].v] + testbuf[i].v * testbuf[i].p);
                }
            }
            
        }
    }

    printf("%d", temp[m][N]);

    // for(int i = 0; i < m; i++)
    // {
    //     printf("%d %d %d", testbuf[i].v, testbuf[i].p, testbuf[i].q);
    // }
    
    return 0;
}
