
/**
 * @description: 201301 JAVA题目0-1级
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int fun(int sum,int num[],int i,int n)
{
    if(i==n)
    {
        return sum==0;
    }
    else
    {   //需要好好理解此处思路
        return(fun(sum+num[i],num,i+1,n)||fun(sum-num[i],num,i+1,n));
    }
          
}
int main()
{
    int N;
    while(scanf("%d",&N)!=EOF)
    {
        int i,j=0,num[N];
        int sum1=0,sum2=0,sum;
        for(i=0;i<N;i++){
            int temp;
            scanf("%d",&temp);
            if(temp%5==0){
                sum1+=temp;
            }else if(temp%3==0){
                sum2+=temp;
            }else{
                num[j++]=temp;
            }
        }
        sum =sum1-sum2;
        int judge = fun(sum,num,0,j);
        if(judge==1){
            printf("true\n");
        }else{
            printf("false\n");
        }
    }
    return 0;
}