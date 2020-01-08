
/**
 * @description: 合法IP
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum1, testnum2, testnum3, testnum4;

int main(void)
{
    while(scanf("%d.%d.%d.%d", &testnum1, &testnum2, &testnum3, &testnum4) != EOF)
    {
        if((testnum1 >= 0)&&(testnum1 <= 255)&&(testnum2 >= 0)&&(testnum2 <= 255)&&(testnum3 >= 0)&&(testnum3 <= 255)&&(testnum4 >= 0)&&(testnum4 <= 255))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
