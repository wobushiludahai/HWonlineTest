/**
 * @description: д��һ�����򣬽���һ������ĸ��������ɵ��ַ�������һ���ַ���Ȼ����������ַ����к��и��ַ��ĸ����������ִ�Сд��
 * @param {type} 
 * @return: 
 */
#include <stdio.h>

int testnum[10] = {0};
int testcharbuf[26] = {0};
char testchar;

int main(void)
{
    while((testchar = getchar())!='\n')
    {
        if((testchar >= '0')&&(testchar <= '9'))
        {
            testnum[testchar - '0']++;
        }
        else if((testchar >= 'a')&&(testchar <= 'z'))
        {
            testcharbuf[testchar - 'a']++;
        }
        else if((testchar >= 'A')&&(testchar <= 'Z'))
        {
            testcharbuf[testchar - 'A']++;
        }
    }

    testchar = getchar();

    if((testchar >= '0')&&(testchar <= '9'))
    {
        printf("%d", testnum[testchar - '0']);
    }
    else if((testchar >= 'a')&&(testchar <= 'z'))
    {
        printf("%d", testcharbuf[testchar - 'a']);
    }
    else if((testchar >= 'A')&&(testchar <= 'Z'))
    {
        printf("%d", testcharbuf[testchar - 'A']);
    }


    return 0;
}
