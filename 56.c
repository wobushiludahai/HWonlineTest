
/**
 * @description: iNOC产品部-完全数计算
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int numcheck(int num)
{
    int sumtemp = 1;
    int temp = num/2;
    for(int i = 2; i <= temp; i++)
    {
        if(num%i == 0)
        {
            sumtemp += i;
        }
    }

    if(sumtemp == num)
    {
        return 1;
    }

    return 0;
}

int testnum;
int count;

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        count = 0;
        for(int i = 2; i <= testnum; i++)
        {
            if(numcheck(i) == 1)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    

    return 0;
}

//other's function
#include <stdio.h>
int main()
{
    int num;
    while(scanf("%d",&num)!=EOF)
    {
        int count=0;
        if(num<6)           count=0;
        else if(num<28)     count=1;
        else if(count<496)  count=2;
        else if(count<8128) count=3;
        else
                            count=4;
        printf("%d\n",count+1);
    }
}