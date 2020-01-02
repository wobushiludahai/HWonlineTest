
/**
 * @description: 矩阵乘法
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testbuf1[100][100] = {0};
int testbuf2[100][100] = {0};
int testbuf3[100][100] = {0};
int testx, testy, testz;
int temp;

int main(void)
{
    while(scanf("%d%d%d", &testx, &testy, &testz) != EOF)
    {
        for(int i = 0; i < testx; i++)
        {
            for(int j = 0; j < testy; j++)
            {
                scanf("%d", &testbuf1[i][j]);
            }
        }

        for(int i = 0; i < testy; i++)
        {
            for(int j = 0; j < testz; j++)
            {
                scanf("%d", &testbuf2[i][j]);
            }
        }

        for(int i = 0; i < testx; i++)
        {
            for(int j = 0; j < testz; j++)
            {
                temp = 0;
                for(int k = 0; k < testy; k++)
                {
                    temp+=(testbuf1[i][k]*testbuf2[k][j]);
                }
                printf("%d ", temp);
            }
            printf("\n");
        }
    }

    return 0;
}
