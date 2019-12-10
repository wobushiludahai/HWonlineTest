
/**
 * @description: 数据分类处理
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int temp1,temp2,temp,temp3;
unsigned int buf1[1000] = {0};
unsigned int buf2[1000] = {0};
unsigned int resultbuf[1000] = {0};
int tempcount = 0,totalcount = 0;
unsigned int tempbak;

int testcheck(int a, int b)
{
    int tempa = a;
    int tempb = b;
    while(tempa)
    {
        if((tempa % 10) == (tempb % 10))
        {
            tempb /= 10;
            if(tempb == 0)
            {
                return 1;
            }
        }
        else
        {
            tempb = b;
            if((tempa % 10) == (tempb % 10))
            {
                tempb /= 10;
            }
        }

        tempa /= 10;
    }
    return 0;
}

int cmp(const void *a, const void *b)
{
    return(*(int *)a - *(int *)b);
}

int main(void)
{
    while(scanf("%d", &temp1)!=EOF)
    {
        for(int i = 0; i < temp1; i++)
        {
            scanf("%d", &buf1[i]);
        }
    
        scanf("%d", &temp2);
        for(int i = 0; i < temp2; i++)
        {
            scanf("%d", &buf2[i]);
        }
    
        qsort(buf2, temp2, sizeof(int), cmp);
    
        tempbak = buf2[0] + 1;
        temp = 2;
        totalcount = 0;
        for(int i = 0; i < temp2; i++)
        {
            if(tempbak!=buf2[i])
            {
                tempcount = 0;
                temp3 = temp;
                for(int j = 0; j < temp1; j++)
                {
                    if(testcheck(buf1[j], buf2[i]))
                    {
                        resultbuf[temp++] = j;
                        resultbuf[temp++] = buf1[j];
                        tempcount++;
                    }
                }
    
                if(tempcount!=0)
                {
                    resultbuf[temp3 - 1] = tempcount;
                    resultbuf[temp3 - 2] = buf2[i];
                    temp += 2;
                    totalcount += 2 * (tempcount + 1);
                }
    
                tempbak = buf2[i];
            }
        }
    
        printf("%d", totalcount);
        for(int i = 0; i < totalcount; i++)
        {
            printf(" %ld", resultbuf[i]);
        }
        printf("\n");
    }
    return 0;
}
