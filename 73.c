
/**
 * @description: 计算日期到天数转换
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testbuf1[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int testbuf2[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int year;
int month;
int day;
int temp;

int main(void)
{
    while(scanf("%d%d%d", &year, &month, &day) != EOF)
    {
        temp = 0;
        if(((year % 4 == 0)&&(year % 100 != 0))||(year % 400 == 0))
        {
            if(day <= testbuf1[month - 1])
            {
                for(int i = 0; i < month - 1; i++)
                {
                    temp += testbuf1[i];
                }
                temp += day;
                printf("%d\n", temp);
            }
            else
            {
                printf("-1\n");
            }
        }
        else
        {
            if(day <= testbuf2[month - 1])
            {
                for(int i = 0; i < month - 1; i++)
                {
                    temp += testbuf2[i];
                }
                temp += day;
                printf("%d\n", temp);
            }
            else
            {
                printf("-1\n");
            }
        }
    }

    return 0;
}
