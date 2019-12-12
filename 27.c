
/**
 * @description: ≤È’“–÷µ‹µ•¥ 
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[1005][55] = {0};
char testbuf1[55] = {0};
char testbuf2[55] = {0};
int testlen;
int numbuf[1005] = {0};
int count = 0;
int n;
int m;

int cmpstr(const void *a, const void *b)
{
    return(strcmp((char *)a, (char *)b));
}

int cmpchar(const void *a, const void *b)
{
    return(*(char *)a - *(char *)b);
}

int strcheck(char *pcheck)
{
    char tempbuf[55];

    strcpy(tempbuf, pcheck);
    if(strlen(tempbuf)!= strlen(testbuf1))
    {
        return 0;
    }

    if(strcmp(tempbuf, testbuf1) == 0)
    {
        return 0;
    }

    qsort(tempbuf, testlen, sizeof(char), cmpchar);
    if(strcmp(tempbuf, testbuf2) == 0)
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    while(scanf("%d", &n) != EOF)
    {
        for(int i = 1; i <= n; i++)
        {
            scanf("%s", &testbuf[i][0]);
        }

        scanf("%s", testbuf1);
        scanf("%d", &m);

        qsort(&testbuf[1][0], n, 55,cmpstr);

        testlen = strlen(testbuf1);
        strcpy(testbuf2, testbuf1);
        qsort(testbuf2, testlen, sizeof(char), cmpchar);

        count = 0;
        for(int i = 1; i <= n; i++)
        {
            if(strcheck(&testbuf[i][0]))
            {
                numbuf[count++] = i;
            }
        }

        printf("%d\n",count);
        if((count > 0)&&(m <= count))
        {
            printf("%s\n", &testbuf[numbuf[m - 1]][0]);
        }
    }

    return 0;
}
