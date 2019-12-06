/**
 * @description: 坐标移动
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[10000];
int distance;
int xrec = 0, yrec = 0;
int temp,templen;

int main(void)
{
    while(gets(testbuf))
    {
        xrec = 0;
        yrec = 0;
        temp = strlen(testbuf);
        for(int i = 0; i < temp; i++)
        {
            for(int j = i; i < temp; j++)
            {
                if(testbuf[j] == ';')
                {
                    templen = j - i;
                    if(((templen)>=2)&&(templen)<=3)
                    {
                        distance = 0;
                        if((testbuf[i] == 'A')||(testbuf[i] == 'S')||(testbuf[i] == 'W')||(testbuf[i] == 'D'))
                        {
                            if(templen == 2)
                            {
                                if((testbuf[i+1] >= '0')&&(testbuf[i+1] <= '9'))
                                {
                                    distance = testbuf[i+1] - '0';
                                }
                            }
                            else
                            {
                                if(((testbuf[i+1] >= '0')&&(testbuf[i+1] <= '9'))&&((testbuf[i+2] >= '0')&&(testbuf[i+2] <= '9')))
                                {
                                    distance = ((testbuf[i+1] - '0')*10+(testbuf[i+2] - '0'));
                                }
                                
                            }

                            switch (testbuf[i])
                            {
                            case 'W':
                                yrec += distance;
                                break;

                            case 'A':
                                xrec -= distance;
                                break;

                            case 'S':
                                yrec -= distance;
                                break;

                            case 'D':
                                xrec += distance;
                                break;

                            default:
                                break;
                            }
                        }
                    }
                    i = j;
                    break;
                }
            }
        }
        printf("%d,%d\n",xrec,yrec);
    }


    return 0;
}

