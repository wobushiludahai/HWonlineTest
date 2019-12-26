
/**
 * @description: 线性插值
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int n,m;
int N,A,M,B;

int main(void)
{
    while(scanf("%d %d", &m, &n) != EOF)
    {
        scanf("%d %d", &M, &A);
        printf("%d %d\n", M, A);
        for(int i = 1; i < m; i++)
        {
            scanf("%d %d", &N, &B);
            if(N == M) continue;
            for(int j = 1; j < N - M; j++)
            {
                printf("%d %d\n",(M+j),(A+(B-A)/(N-M)*j));
            }
            printf("%d %d\n", N, B);
            M = N;
            A = B;
        }
    }

    return 0;
}
