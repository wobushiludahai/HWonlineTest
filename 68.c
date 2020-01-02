
/**
 * @description: 成绩排序
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
    char namebuf[20];
    int score;
}tagstudent;

int testnum;
int testflag;
tagstudent testbuf[1000] = {0};

int cmp1(const void *a, const void *b)
{
    tagstudent *temp1;
    tagstudent *temp2;

    temp1 = (tagstudent *)a;
    temp2 = (tagstudent *)b;

    return (temp1->score - temp2->score);
}

int cmp2(const void *a, const void *b)
{
    tagstudent *temp1;
    tagstudent *temp2;

    temp1 = (tagstudent *)a;
    temp2 = (tagstudent *)b;

    return (temp2->score - temp1->score);
}


int main(void)
{
    while(scanf("%d%d", &testnum, &testflag) != EOF)
    {
        memset(testbuf, 0, sizeof(tagstudent)*1000);
        for(int i = 0; i < testnum; i++)
        {
            scanf("%s %d", testbuf[i].namebuf, &testbuf[i].score);
        }

        if(testflag)
        {
            qsort(testbuf, testnum, sizeof(tagstudent), cmp1);
        }
        else
        {
            qsort(testbuf, testnum, sizeof(tagstudent), cmp2);
        }

        for(int i = 0; i < testnum; i++)
        {
            printf("%s %d\n", testbuf[i].namebuf, testbuf[i].score);
        }
    }

    return 0;
}
