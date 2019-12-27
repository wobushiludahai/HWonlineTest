
/**
 * @description: 表达式求值
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
    int *base;
    int *top;
    
}stack;
void push(stack *s,int e)
{
    *(s->top) = e;
    (s->top)++;
    //printf("push %d into stack\n",e);
}
void pop(stack *s,int *e)
{
    if((s->base)==(s->top))
        e=NULL;
    else
    {
     *e = *(--(s->top));
    }
   // printf("pop %d from stack\n",*e);
}
int gettop(stack *s)
{
    //printf("gettop %d from stack\n",*((s->top)-1));
    return *((s->top)-1);
}
int isempty(stack *s)
{
    return ((s->base)==(s->top));//1:isempty 0:noempty
}
int elemnum(stack* s)
{
    return (abs((s->base)-(s->top)));
}
int ishigh(char c1,char c2)//c2>c1?
{
    if(c1=='+')
    {
        switch(c2)
        {
            case '+':return 0;
            case '*':return 1;
            case '-':return 0;
            case '/':return 1;
        }
    }
    if(c1=='-')
    {
        switch(c2)
        {
            case '+':return 0;
            case '*':return 1;
            case '-':return 0;
            case '/':return 1;
        }
    }
    if(c1=='*')
    {
        switch(c2)
        {
            case '+':return 0;
            case '*':return 0;
            case '-':return 0;
            case '/':return 0;
        }
    }
    if(c1=='/')
    {
        switch(c2)
        {
            case '+':return 0;
            case '*':return 0;
            case '-':return 0;
            case '/':return 0;
        }
    }
    if(c1=='(')
        return 1;
}
int calcpro(int a,int b,int ch)
{
    switch(ch)
    {
        case '+':return (a+b);
        case '-':return (a-b);
        case '*':return (a*b);
        case '/':return (a/b);
    }
}
int main()
{
    stack nums,calcs;
    char str[101] ={0};
    while(gets(str)!=NULL)
    {
        nums.base=(int*)malloc(100*sizeof(int));
        calcs.base = (int*)malloc(100*sizeof(int));
        nums.top=nums.base;
        calcs.top=calcs.base;
        int c1,c2,n1,n2;
        
        int len = strlen(str);
        int i,j,k,temp=0,val=0;
        int leftflag=0;
        int rightflag=0;
        char *p;
        for(i=0;i<len;i++)
        {
            if((str[i]=='[')||(str[i]=='{'))
                str[i]='(';
            if(str[i]==']'||str[i]=='}')
                str[i]=')';
        }
        for(i=0;i<len;i++)
        {
            if(str[i]=='(')
            {
                push(&calcs,'(');
                continue;
            }
            if(str[i]==')')
            {
                while((c1=gettop(&calcs))!='(')
                {
                    pop(&calcs,&c1);
                    pop(&nums,&n2);
                    pop(&nums,&n1);
                    temp = calcpro(n1,n2,c1);
                    push(&nums,temp);
                }
                pop(&calcs,&c1);
                continue;
            }
            if((str[i]=='+')||(str[i]=='-')||(str[i]=='*')||(str[i]=='/'))
            {
                if(isempty(&calcs)==1)
                {
                    push(&calcs,str[i]);
                    continue;
                }
                else
                {
                    c1=gettop(&calcs);
    
                    if(ishigh(c1,str[i])==1)//优先级高入栈
                    {
                        push(&calcs,str[i]);
                    }
                    else
                    {
                        pop(&calcs,&c1);
                        pop(&nums,&n2);
                        pop(&nums,&n1);
                        temp = calcpro(n1,n2,c1);
                        push(&nums,temp);
                        i--;//重新判断。
                    }
                    continue;
                }
    
            }
            if(isdigit(str[i]))
            {
                n1=strtoul(&str[i],&p,10);
                push(&nums,n1);
    
                i=p-1-str;
                continue;
            }
        }
   // printf("\n%d %d\n",elemnum(&calcs),elemnum(&nums));
        while(elemnum(&calcs)>=1)
        {
            pop(&calcs,&c1);
            pop(&nums,&n2);
            pop(&nums,&n1);
            temp=calcpro(n1,n2,c1);
            push(&nums,temp);
        }
            pop(&nums,&val);
            printf("%d\n",val);
    }
    return 0;
}