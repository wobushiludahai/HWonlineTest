/**
 * @description: 写出一个程序，接受一个由字母和数字组成的字符串，和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写。
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
