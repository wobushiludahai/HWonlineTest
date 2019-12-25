
/**
 * @description: 按字节截取字符串
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
    char str[100], str1[100];
    int num;
       
    while(scanf("%s", str) != EOF)
    {
        char str1[100]={NULL};
        scanf("%d", &num);
        for(int i=0; i<num; i++)
        {
            str1[i] = str[i];
        }

        printf("%s\n", str1);
    }
    return 0;
}
