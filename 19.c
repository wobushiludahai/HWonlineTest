/**
 * @description: 开发一个简单错误记录功能小模块，能够记录出错的代码所在的文件名称和行号。
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
    int linenum;
    int totalnum;
}tagtest;

tagtest ttest[80] = {0};
char testbuf[100] = {0};
int record = 0;
int namenum = 0;
int i,j;
int temp;

int main(void)
{
    while(scanf("%s %d", testbuf, &temp)!=EOF)
    {
        if(temp == 0) goto END;
        namenum = 0;
        j = strlen(testbuf) - 1;
        for(int k = 0; k < 16; k++)
        {
            if(testbuf[j] == '\\')
            {
                break;
            }
            namenum++;
            j--;
        }

        for(i = 0; i < record; i++)
        {
            if((ttest[i].totalnum)&&(strcmp(&testbuf[j +1], ttest[i].namebuf)==0)&&(temp == ttest[i].linenum))
            {
                ttest[i].totalnum++;
                goto Next;
            }
        }

        strcpy(ttest[record].namebuf, &testbuf[j +1]);
        ttest[record].totalnum = 1;
        ttest[record].linenum = temp;
        record++;
        Next:
        ;
    }

    END:
    if (record > 8)
        j = record - 8;
    else
        j = 0;

    for(; j < record; j++)
    {
        printf("%s %d %d\n", ttest[j].namebuf, ttest[j].linenum, ttest[j].totalnum);
    }

    return 0;
}
