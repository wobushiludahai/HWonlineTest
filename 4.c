/**
 * @description: ���������ַ������밴����Ϊ8���ÿ���ַ�����������µ��ַ������飻
 * ���Ȳ���8���������ַ������ں��油����0�����ַ��������� 
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char testbuf[105] = {0};
int testsize, testtemp;

int main(void)
{
    gets(testbuf);
    testsize = strlen(testbuf);
    testtemp = 0;
    while (1)
    {
        if(testsize > 8)
        {
            for(int i = 0; i < 8; i++)
            {
                printf("%c", testbuf[testtemp + i]);
            }
            printf("\n");
            testsize -= 8;
            testtemp += 8;
        }
        else
        {
            for(int i = 0; i < testsize; i++)
            {
                printf("%c", testbuf[testtemp + i]);
            }
            for(int i = 0; i < 8 - testsize; i++)
            {
                printf("0");
            }
            printf("\n");
            break;
        }
    }

    gets(testbuf);
    testsize = strlen(testbuf);
    testtemp = 0;
    while (1)
    {
        if(testsize > 8)
        {
            for(int i = 0; i < 8; i++)
            {
                printf("%c", testbuf[testtemp + i]);
            }
            printf("\n");
            testsize -= 8;
            testtemp += 8;
        }
        else
        {
            for(int i = 0; i < testsize; i++)
            {
                printf("%c", testbuf[testtemp + i]);
            }
            for(int i = 0; i < 8 - testsize; i++)
            {
                printf("0");
            }
            break;
        }
    }


    return 0;
}