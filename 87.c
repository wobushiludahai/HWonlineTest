
/**
 * @description: 密码强度等级
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[100];
int testlen;
int daxieflag, xiaoxieflag;
int shuzicount;
int fuhaocount;
int fenshu;

int main(void)
{
    while(scanf("%s", testbuf) != EOF)
    {
        testlen = strlen(testbuf);
        daxieflag = 0;
        xiaoxieflag = 0;
        shuzicount = 0;
        fuhaocount = 0;
        fenshu = 0;

        if(testlen <= 4)
        {
            fenshu += 5;
        }
        else if(testlen <= 7)
        {
            fenshu += 10;
        }
        else
        {
            fenshu += 25;
        }

        for(int i = 0; i < testlen; i++)
        {
            if((testbuf[i] >= 'a')&&(testbuf[i] <= 'z'))
            {
                xiaoxieflag = 1;
            }
            else if((testbuf[i] >= 'A')&&(testbuf[i] <= 'Z'))
            {
                daxieflag = 1;
            }
            else if((testbuf[i] >= '0')&&(testbuf[i] <= '9'))
            {
                shuzicount++;
            }
            else if(((testbuf[i] >= 0x21)&&(testbuf[i] <= 0x2F))||((testbuf[i] >= 0x3A)&&(testbuf[i] <= 0x40))||\
            ((testbuf[i] >= 0x5B)&&(testbuf[i] <= 0x60))||((testbuf[i] >= 0x7B)&&(testbuf[i] <= 0x7E)))
            {
                fuhaocount++;
            }
        }

        if(daxieflag && xiaoxieflag)
        {
            fenshu += 20;
        }
        else if(daxieflag || xiaoxieflag)
        {
            fenshu += 10;
        }
        
        if(shuzicount > 1)
        {
            fenshu += 20;
        }
        else if(shuzicount == 1)
        {
            fenshu += 10;
        }

        if(fuhaocount > 1)
        {
            fenshu += 25;
        }
        else if(fuhaocount == 1)
        {
            fenshu += 10;
        }

        if(daxieflag && xiaoxieflag && shuzicount && fuhaocount)
        {
            fenshu += 5;
        }
        else if((daxieflag || xiaoxieflag) && shuzicount && fuhaocount)
        {
            fenshu += 3;
        }
        else if((daxieflag || xiaoxieflag) && shuzicount)
        {
            fenshu += 2;
        }

        if(fenshu >= 90)
        {
            printf("VERY_SECURE\n");
        }
        else if(fenshu >= 80)
        {
            printf("SECURE\n");
        }
        else if(fenshu >= 70)
        {
            printf("VERY_STRONG\n");
        }
        else if(fenshu >= 60)
        {
            printf("STRONG\n");
        }
        else if(fenshu >= 50)
        {
            printf("AVERAGE\n");
        }
        else if(fenshu >= 25)
        {
            printf("WEAK\n");
        }
        else
        {
            printf("VERY_WEAK\n");
        }
    }

    return 0;
}
