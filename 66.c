
/**
 * @description: 配置文件恢复
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
    char cmdbuf[30];
    char executebuf[30];
}ttestone;

typedef struct
{
    char cmdbuf[30];
    char executebuf[30];
    int kongge;
}ttesttwo;

ttestone one[1] = {"reset", "reset what"};
ttesttwo two[5] = {{"reset board", "board fault", 6},{"board add", "where to add", 6},{"board delet","no board at all", 6},\
                    {"reboot backplane", "impossible", 7}, {"backplane abort", "install first", 10}};
char cuowu[30] = "unkown command";

char testbuf[100] = {0};
int testlen;
int kongge;
int temp;
int tempbuf[6] = {0};
int count;
int tempcount;
int record;

int main(void)
{
    while(gets(testbuf))
    {
        testlen = strlen(testbuf);
        kongge = 0;
        for(int i = 0; i < testlen; i++)
        {
            if(testbuf[i] == ' ')
            {
                kongge = i;
            }
        }

        temp = 0;
        if(kongge == 0)     //一字串
        {
            for(int i = 0; i < testlen; i++)
            {
                if(testbuf[i] != one[0].cmdbuf[i])
                {
                    temp = 1;
                    break;
                }
            }
            printf("%s\n", (temp ? cuowu : one[0].executebuf));
        }
        else
        {
            memset(tempbuf, 0, 6);
            count = 0;
            for(int i = 0; i < 5; i++)
            {
                temp = 0;
                for(int j = 0; j < kongge; j++)
                {
                    if(two[i].cmdbuf[j] != testbuf[j])
                    {
                        temp = 1;
                        break;
                    }
                }

                if(temp == 0)
                {
                    tempbuf[count++] = i;
                }
            }

            if(count != 0)
            {
                tempcount = 0;
                for(int i = 0; i < count; i++)
                {
                    temp = 0;
                    for(int j = 0; (j+ kongge + 1) < testlen; j++)
                    {
                        if(testbuf[j+kongge+1] != two[tempbuf[i]].cmdbuf[two[tempbuf[i]].kongge+j])
                        {
                            temp = 1;
                            break;
                        }
                    }

                    if(temp == 0)
                    {
                        record = i;
                        tempcount++;
                    }
                    else
                    {
                        tempbuf[i] = 0;
                    }
                }

                if(tempcount != 1)
                {
                    printf("%s\n", cuowu);
                }
                else
                {
                    printf("%s\n", two[tempbuf[record]].executebuf);
                }
            }
            else
            {
                printf("%s\n", cuowu);
            }
        }

    }

    return 0;
}
