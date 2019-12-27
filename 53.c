
/**
 * @description: iNOC产品部-杨辉三角的变形
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int function(int n, int m)
{
    if((m < 0)||(m > (2*n-1)))
    {
        return 0;
    }
    else if((m == 1)||(m == (2*n - 1)))
    {
        return 1;
    }
    else
    {
        return (function(n-1,m-2)+function(n-1,m-1)+function(n-1,m));
    }
}

int testnum;
int flag = 0;

int main()
{
    while(scanf("%d", &testnum)!=EOF)
    {
        flag = 0;
        for(int i = 1; i <= (2*testnum - 1); i++)
        {
            if((function(testnum, i) % 2 == 0))
            {
                printf("%d\n", i);
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            printf("-1\n");
        }
    }
}

//other's function
//可以借鉴思考一下，最大到4
#include<stdio.h>
 
int main(){
    int n;
    while (scanf("%d",&n)!=EOF){
        if (n==1||n==2){
            printf("%d\n",-1);
        }
        else if (n%2==1){
            printf("%d\n",2);
        }
        else if (n%4==0){
            printf("%d\n",3);
        }
        else
            printf("%d\n",4);
    }
    return 0;
}