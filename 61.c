
/**
 * @description: 放苹果
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int count(int m, int n)
{
    if((n == 1)||(m == 0))
    {
        return 1;
    }

    if(n > m)
    {
        return count(m, m);
    }

    return count(m, n-1) + count(m-n, n);   //该盒子无苹果和所有盒子都有苹果
}

int M, N;

int main(void)
{
    while(scanf("%d%d", &M, &N) != EOF)
    {
        printf("%d\n", count(M, N));
    }

    return 0;
}
