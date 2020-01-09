
/**
 * @description: 人民币转换
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char fuzhubuf[10][10] = {"零","壹","贰","叁","肆","伍","陆","柒","捌","玖"};

double testnum;
int temp;
void translate(int num)
{
    int temp = num;
    int qianflag = 0, baiflag = 0, lingflag = 0;

    if(temp/1000)
    {
        // printf("num:%d   temp:%d\n", num, temp);
        printf("%s仟", &fuzhubuf[temp/1000][0]);
        qianflag = 1;
        temp = temp - temp/1000*1000;
    }

    if(temp/100)
    {
        printf("%s佰", &fuzhubuf[temp/100][0]);
        baiflag = 1;
        temp = temp - temp/100*100;
    }
    else
    {
        if(qianflag)
        {
            lingflag = 1;
        }
    }

    if(temp/10)
    {
        if(lingflag)
        {
            printf("零");
            lingflag = 0;
        }
        if(temp/10 > 1)
        {
            printf("%s拾", &fuzhubuf[temp/10][0]);            
        }
        else
        {
            printf("拾");
        }

        temp = temp - temp/10*10;
    }
    else
    {
        if((qianflag)||(baiflag))
        {
            lingflag = 1;
        }
    }

    if(temp)
    {
        if(lingflag)
        {
            printf("零");
            lingflag = 0;
        }
        printf("%s", &fuzhubuf[temp][0]);
    }
}

int main(void)
{
    while(scanf("%lf", &testnum) != EOF)
    {
        printf("人民币");
        temp = testnum/100000000;
        if(temp)
        {
            translate(temp);
            printf("亿");
            testnum = testnum - temp*100000000;
        }

        temp = testnum/10000;
        if(temp)
        {
            translate(temp);
            printf("万");
            testnum = testnum - temp*10000;
        }

        temp = testnum;
        if(temp)
        {
            translate(temp);
            printf("元");            
        }

        testnum = testnum - temp;
        temp = (int)(testnum * 1000 + 1)/10;    //double精度问题
 
        if(temp/10)
        {
            printf("%s角", &fuzhubuf[temp/10][0]); 
            temp = temp - temp/10*10;        
        }

        if(temp)
        {
            printf("%s分", &fuzhubuf[temp][0]);
        }

        printf("\n");
    }

    return 0;
}
