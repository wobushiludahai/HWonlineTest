
/**
 * @description: 无线OSS-高精度整数加法
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int min(int m,int n)
{
    return (m>n)?n:m;
}
int max(int m,int n)
{
    return (m>n)?m:n;
}
void reverse_str(char* str,char* re_str)
{
    int len=strlen(str);
    int i;
    for(i=0;i<len;i++)
    {
        re_str[i]=str[len-1-i];
    }
}
 
void add(char* str1,char* str2,char* result)
{
    int len=strlen(str1);
    int temp;
    int i;
    int c=0;
    for(i=0;i<len;i++)
    {
        temp=str1[i]-'0'+str2[i]-'0'+c;
        result[i]=temp%10+'0';
        c=temp/10;
    }
    if(c)
    {
        result[i++]='1';
    }
    result[i]='\0';
}
void sub(char* str1,char* str2,char* result)
{
    int len=strlen(str1);
    int temp;
    int i;
    int c=0;
    for(i=0;i<len;i++)
    {
        temp=str1[i]-str2[i]-c;
        if(temp<0)
        {
            result[i]=temp+10+'0';
            c=1;
        }
        else
        {
            result[i]=temp+'0';
            c=0;
        }
 
    }
    if(c)
    {
        result[i++]='-';
        printf("error\n");
    }
    result[i]='\0';
}
void display(char* str)
{
    int len=strlen(str);
    int i;
    for(i=0;i<len-1;i++)
    {
        if(str[i]!='0')
            break;
    }
    printf("%s\n",str+i);
}
int main()
{
 
    char str1[100];
    char str2[100];
    while(scanf("%s",str1)!=EOF)
    {
        scanf("%s",str2);
        char re_str1[100]={0};
        char re_str2[100]={0};
        char re_result[100]={0};
        char result[100]={0};
        int i;
        int str1_len=strlen(str1);
        int str2_len=strlen(str2);
        /*处理str1*/
        if(str1[0]!='-')
        {
            strcat(str1,"+");
            reverse_str(str1,re_str1);
        }
        else
        {
            strcat(str1,"-");
            reverse_str(str1+1,re_str1);
        }
        /*处理str2*/
        if(str2[0]!='-')
        {
            strcat(str2,"+");
            reverse_str(str2,re_str2);
        }
        else
        {
            strcat(str2,"-");
            reverse_str(str2+1,re_str2);
        }
 
        int len1=strlen(re_str1);
        int len2=strlen(re_str2);
 
        /*给短的那个数补上0，使两个数对齐*/
        for(i=len1;i<len2;i++)
        {
            strcat(re_str1,"0");
        }
        for(i=len2;i<len1;i++)
        {
            strcat(re_str2,"0");
        }
 
        if(re_str1[0]=='-'&&re_str2[0]=='-')  /*执行加法再添负号*/
        {
            add(re_str1+1,re_str2+1,re_result);
            strcat(re_result,"-");
            reverse_str(re_result,result);
            display(result);
            continue;
        }
        else if(re_str1[0]=='+'&&re_str2[0]=='+')
        {
            add(re_str1+1,re_str2+1,re_result);
            reverse_str(re_result,result);
            display(result);
            continue;
        }
        else if(str1[0]=='-')  /*执行减法str2-str1*/
        {
            if(str1_len-1>str2_len||(str1_len-1==str2_len&&strcmp(str1+1,str2)<0))/*str1>str2 所示执行str1-str2再添负号*/
            {
                sub(re_str1+1,re_str2+1,re_result);
                reverse_str(re_result,result);
                printf("-");
                display(result);
            }
            else                                           /*str2>str1 */
            {
                sub(re_str2+1,re_str1+1,re_result);
                reverse_str(re_result,result);
                display(result);
                continue;
            }
 
        }
        else if(str2[0]=='-')  /*执行减法str1-str2*/
        {
            if(str2_len-1>str1_len||(str2_len-1==str1_len&&strcmp(str1,str2+1)<0))/*str2>str1 所示执行str2-str1再添负号*/
            {
                sub(re_str2+1,re_str1+1,re_result);
                reverse_str(re_result,result);
                printf("-");
                display(result);
            }
            else                                           /*str1>str2 */
            {
                sub(re_str1+1,re_str2+1,re_result);
                reverse_str(re_result,result);
                display(result);
                continue;
            }
 
        }
    }
    return 0;
 
}
