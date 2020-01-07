
/**
 * @description: 二维数组操作
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int m, n;
int excm1, excm2, excn1, excn2;
int insertm, insertn;
int querym, queryn;

int main(void)
{
    while(scanf("%d%d%d%d%d%d%d%d%d%d",&m,&n,&excm1,&excn1,&excm2,&excn2,&insertm,&insertn,&querym,&queryn)!=EOF)
    {
        if(m > 9 || n > 9)
        {
            printf("-1\n");
        }
        else
        {
            printf("0\n");
        }

        if(excm1 >= m || excm2 >= m || excn1 >= n || excn2 >= n)
        {
            printf("-1\n");
        }
        else
        {
            printf("0\n");
        }

        if(insertm >= m)
        {
            printf("-1\n");
        }
        else
        {
            printf("0\n");
        }

        if(insertn >= n)
        {
            printf("-1\n");
        }
        else
        {
            printf("0\n");
        }

        if(querym >= m || queryn >= n)
        {
            printf("-1\n");
        }
        else
        {
            printf("0\n");
        }
    }

    return 0;
}
