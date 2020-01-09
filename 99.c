
/**
 * @description: 自守数
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum;
int count;
int temp;
int temp1, temp2;

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        count = 0;
        for(int i = 0; i <= testnum; i++)
        {
            temp = i*i;
            temp1 = i;
            while(temp1)
            {
                if(temp1%10 != temp%10)
                {
                    break;
                }
                temp1 /= 10;
                temp /= 10;
            }
            if(temp1 == 0)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
