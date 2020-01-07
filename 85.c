
/**
 * @description: 字符串运用-密码截取
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[100000] = {0};
// int tempa, tempb;
int max;
int templen;
int temp;


int qishu(int test)
{
    int fanhui = 1;
    int tempa = test;
    int tempb = test;

    while((tempa >= 1)&&(tempb < (templen - 1)))
    {
        if(testbuf[--tempa] == testbuf[++tempb])
        {
            fanhui += 2;
        }
        else
        {
            return fanhui;
        }
    }
    return fanhui;
}

int oushu(int a, int b)
{
    int fanhui = 2;
    int tempa = a;
    int tempb = b;

    while((tempa >= 1)&&(tempb < (templen - 1)))
    {
        if(testbuf[--tempa] == testbuf[++tempb])
        {
            fanhui += 2;
        }
        else
        {
            return fanhui;
        }
    }
    return fanhui;
}

int main(void)
{
    while (scanf("%s", testbuf)!=EOF)
    {
        max = 0;
        templen = strlen(testbuf);
        for(int i = 1; i < templen - 1; i++)
        {
            temp = qishu(i);
            if(temp > max)
            {
                max = temp;
            }
        }

        for(int i = 0; i < templen - 1; i++)
        {
            if(testbuf[i] == testbuf[i+1])
            {
                temp = oushu(i,i+1);
                if(temp > max)
                {
                    max = temp;
                }
            }
        }
        
        printf("%d\n", max);
       
    }

    return 0;
}