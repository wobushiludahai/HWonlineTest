
/**
 * @description: 火车进站
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int Num[10000][11],count=0,N;
int cmp(const void *a,const void *b){
    int i=0;
    while(((int*)a)[i]==((int*)b)[i]&&i<N){
        i++;
    }
    return ((int*)a)[i]-((int*)b)[i];
}
void m_swap(int *a,int i,int j){
    int temp;
    temp =a[i];
    a[i]=a[j];
    a[j]=temp;
}
void stack(int *a,int*num,int len){
    int i,j=0,top=-1,stk[100];
    for(i=0;i<len;i++){
        stk[++top]=num[i];
        while(j<len&&top>=0&&a[j]==stk[top]){
            top--;
            j++;
        }
    }
    if(top==-1){
        for(i=0;i<len;i++){
            Num[count][i]=a[i];
        }
        count++;
    }
}
void fun(int i,int *a,int len,int *num){
    if(i>=len){
        stack(a,num,len);
        return;
    }
    int j=i;
    for(j;j<len;j++){
        m_swap(a,i,j);
        fun(i+1,a,len,num);
        m_swap(a,i,j);
    }
}
int main(){
    while(scanf("%d",&N)!=EOF){
        int i,num[N],num1[N],j;
        for(i=0;i<N;i++){
            scanf("%d",&num[i]);
            num1[i]=i+1;
        }
        fun(0,num1,N,num);
        qsort(Num,count,sizeof(int)*11,cmp);
        for(i=0;i<count;i++){
            for(j=0;j<N;j++){
                printf("%d ",Num[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}