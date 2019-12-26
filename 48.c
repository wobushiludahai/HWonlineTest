
/**
 * @description: 从单向链表中删除指定值的节点
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct testlist
{
    int value;
    struct testlist *pnext;
};

int testnum;
struct testlist *ptest;
int value1,value2;
int delvalue;

void listinsert(int insertvalue, int markvalue)
{
    struct testlist *pinsert;
    struct testlist *ptemplist;
    ptemplist = ptest;
    do
    {
        if(markvalue == ptemplist->value)
        {
            pinsert = (struct testlist *)malloc(sizeof(struct testlist));
            pinsert->value = insertvalue;
            pinsert->pnext = ptemplist->pnext;
            ptemplist->pnext = pinsert;
            return;
        }
        ptemplist = ptemplist->pnext;
    } while (ptemplist);
}

void listdel(int value)
{
    struct testlist *ptemplist;
    struct testlist *ptempbak;
    ptemplist = ptest;
    if(value == ptemplist->value)
    {
        ptest = ptest->pnext;
    }
    else
    {
        ptempbak = ptemplist;
        ptemplist = ptemplist->pnext;
        while(ptemplist)
        {
            if(ptemplist->value == value)
            {
                ptempbak->pnext = ptemplist->pnext;
                break;
            }
            ptempbak = ptemplist;
            ptemplist = ptemplist->pnext;
        }
    }
    free(ptemplist);
}

void showlist(void)
{
    struct testlist *ptemplist;
    ptemplist = ptest;
    while(ptemplist)
    {
        printf("%d ", ptemplist->value);
        ptemplist = ptemplist->pnext;
    }
    printf("\n");
}

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        ptest = (struct testlist *)malloc(sizeof(struct testlist));
        ptest->pnext = NULL;
        scanf("%d", &(ptest->value));
        for(int i = 1; i < testnum; i++)
        {
            scanf("%d %d", &value1, &value2);
            listinsert(value1, value2);
        }

        scanf("%d", &delvalue);

        listdel(delvalue);
        showlist(); 
    }

    return 0;
}
