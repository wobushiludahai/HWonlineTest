/**
 * @description: 计算字符串最后一个单词的长度，单词以空格隔开。
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
char testchar;
int j;

int main(void)
{
    while((testchar = getchar())!='\n')
    {
        j++;
        if(testchar == ' ')
        {
            j = 0;
        }
    }
    printf("%d", j);

    return 0;      
}