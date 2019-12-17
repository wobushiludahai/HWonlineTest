
/**
 * @description: 称砝码
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testbuf[100000] = {0};
int n;
int m[15] = {0};
int x[15] = {0};
int count = 0;

int main(void)
{
    while(scanf("%d", &n) != EOF)
    {
        memset(testbuf, 0, 100000);
        memset(m, 0, 15);
        memset(x, 0, 15);
        count = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &m[i]);
        }

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &x[i]);
        }
        testbuf[0] = 1;
        for(int i = 0; i < n; i++)
        {
            for(int j = 1; j <= x[i]; j++)
            {
                for(int k = 99999; k >=0; k--)
                {
                    if(testbuf[k]==1)
                    {
                        testbuf[k + m[i]] = 1;
                    }
                }
            }
        }

        for(int i = 0; i < 100000; i++)
        {
            if(testbuf[i] == 1)
            {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
