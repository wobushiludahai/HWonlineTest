/**
 * @description: ����һ�������������մ�С�����˳����������������������ӣ���180����������Ϊ2 2 3 3 5 ��
���һ��������ҲҪ�пո�
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

long test;
int iszhishu(int a)
{
    int result = 1;

    for(int i = 2; i < sqrt(a); i++)
    {
        if(a%i == 0)
        {
            result = 0;
            break;
        }
    }

    return result;
}

int main(void)
{
    scanf("%ld", &test);
    while(1)
    {
        for(int i = 2; ;i++)
        {
            if(1 == iszhishu(i))
            {
                if(test%i == 0)
                {
                    printf("%d ", i);
                    test /= i;
                    if(test==1)
                    goto end;
                    break;
                }
            }
        }
    }
    end:


    return 0;
}
