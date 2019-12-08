

/**
 * @description: 密码验证合格程序
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[50] = {0};
int testlen;
int testcount;
char testone,testtwo,testthree;
int testflag;

int daxiecheck(char *test, int len)
{
    for(int i = 0; i < len; i++)
    {
        if((test[i] >= 'A')&&(test[i] <= 'Z'))
        {
            return 1;
        }
    }
    return 0;
}

int xiaoxiecheck(char *test, int len)
{
    for(int i = 0; i < len; i++)
    {
        if((test[i] >= 'a')&&(test[i] <= 'z'))
        {
            return 1;
        }
    }
    return 0;
}

int shuzicheck(char *test, int len)
{
    for(int i = 0; i < len; i++)
    {
        if((test[i] >= '0')&&(test[i] <= '9'))
        {
            return 1;
        }
    }
    return 0;
}

int otherscheck(char *test, int len)
{
    for(int i = 0; i < len; i++)
    {
        if((test[i] >= 'A')&&(test[i] <= 'Z'));
        else if((test[i] >= '0')&&(test[i] <= '9'));
        else if((test[i] >= 'a')&&(test[i] <= 'z'));
        else return 1;
    }
    return 0;
}

int main(void)
{
    while(gets(testbuf))
    {
        testlen = strlen(testbuf);
        if(testlen <= 8)
        {
            printf("NG\n");
            continue;
        }

        testcount = 0;
        if(daxiecheck(testbuf, testlen)) testcount++;
        if(xiaoxiecheck(testbuf, testlen)) testcount++;
        if(shuzicheck(testbuf, testlen)) testcount++;
        if(otherscheck(testbuf, testlen)) testcount++;

        if(testcount < 3)
        {
            printf("NG\n");
            continue;
        }

        testflag = 1;
        for(int i = 0; i < (testlen - 4); i++)
        {
            testone = testbuf[i];
            testtwo = testbuf[i + 1];
            testthree = testbuf[i + 2];
            for(int j = i + 3; j < testlen - 3; j++)
            {
                if((testone == testbuf[j])&&(testtwo == testbuf[j+1])&&(testthree == testbuf[j + 2]))
                {
                    testflag = 0;
                    printf("NG\n");
                    break;
                }
            }
        }

        if(testflag == 1)
        {
            printf("OK\n");
        }
    }

    return 0;
}
