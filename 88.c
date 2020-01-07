
/**
 * @description: 扑克牌大小
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char str[100],*a,*b;
    gets(str);
    a=strtok(str,"-");
    b=strtok(NULL,"-");
    int len_a = 0,len_b = 0,i=0;
    while(*(a+i)!='\0')
    {
        if(*(a+i)==' ')
        {
            len_a++;
        }
        i++;
    }
    i=0;
    while(*(b+i)!='\0')
    {
        if(*(b+i)==' ')
        {
           len_b++;
        }
         i++;
    }
    if(len_a==1&&strlen(a)>5)
    {
        len_a=6;
    }
    else if(len_a==3)
    {
        len_a=5;
    }
    if(len_b==1&&strlen(b)>5)
    {
        len_b=6;
    }
    else if(len_b==3)
    {
     len_b=5;
    }
    if(len_a!=len_b&&len_a<5&&len_b<5)
    {
        printf("ERROR\n");
    }
    else if(len_a>=5&&len_b<len_a)
    {
        printf("%s\n",a);
    }
    else if(len_b>=5&&len_a<len_b)
    {
        printf("%s\n",b);
    }
    else if(len_a==len_b)
    {
        int x=(int)a[0],y=(int)b[0];
       if(a[0]=='1'&&a[1]=='0')
       {
           x='9'+1;
       }
       if(b[0]=='1'&&b[1]=='0')
       {
           y='9'+1;
       }
        if(x>y){
              printf("%s",a);
        }
        else
        {
              printf("%s",b);
        }
    }
    return 0;
}
