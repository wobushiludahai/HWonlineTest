
/**
 * @description: 学英语
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char fuzhu[][100] = {"","one","two","three","four","five","six","seven","eight","nine","ten",\
                "eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen",\
                "eighteen","nineteen"};

char shiwei[][100] = {"", "","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

int testnum;
int temp1,temp2,temp3;
void shuchu(int num)
{
    int flag = 0;
    int tempnum = num;
    int temp;

    temp = tempnum/100;
    if(temp)
    {
        flag = 1;
        printf("%s hundred and ", &fuzhu[temp][0]);
        tempnum = tempnum - temp*100;
    }
    temp = tempnum/10;
    if(temp >1)
    {
        printf("%s ", &shiwei[temp][0]);
        temp = tempnum % 10;
        if(temp)
        {
            printf("%s ", &fuzhu[temp][0]);                
        }
    }
    else
    {
        printf("%s ", &fuzhu[tempnum][0]);
    }
}

int main(void)
{
    while ((scanf("%d", &testnum)) != EOF)
    {
        temp1 = testnum/1000000;
        testnum = testnum - temp1*1000000;
        temp2 = testnum/1000;
        temp3 = testnum - temp2*1000;
        if(temp1)
        {
           shuchu(temp1);
            printf("million ");
        }

        if(temp2)
        {
            shuchu(temp2);
            printf("thousand ");
        }

        if(temp3)
        {
            shuchu(temp3);
        }

        printf("\n");
    }

    return 0;
}
