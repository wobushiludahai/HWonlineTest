/**
 * @description: �����ַ������һ�����ʵĳ��ȣ������Կո������
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