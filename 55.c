
/**
 * @description: (练习用)挑7
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum;
int count;

int check(int num)
{
    int temp = num;

    if(num%7 == 0)
    {
        return 1;
    }

    while(temp)
    {
        if(temp%10 == 7)
        {
            return 1;
        }
        temp /= 10;
    }

    return 0;
}

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        count = 0;
        for(int i = 1; i <= testnum; i++)
        {
            if(check(i))
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
