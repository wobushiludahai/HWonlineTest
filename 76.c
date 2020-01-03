
/**
 * @description: 尼科彻斯定理
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum;
int temp;

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        temp = testnum * testnum;
        temp = temp - testnum + 1;
        for(int i = 0; i < testnum; i++)
        {
            printf("%d", (temp + 2*i));
            if(i != testnum - 1)
            {
                printf("+");
            }
        }
        printf("\n");
    }

    return 0;
}
