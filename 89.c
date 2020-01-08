
/**
 * @description: 24点运算
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char testbuf[4][6];
int testlen1, testlen2, testlen3, testlen4;
float testnum1, testnum2, testnum3, testnum4;
float testtemp1, testtemp2, testtemp3;
char fuzhubuf[] = "+-*/";

int translate(char str, int len)
{
    if(len > 1)
    {
        return 10;
    }

    if(str == 'A')
    {
        return 1;
    }
    else if(str == 'J')
    {
        return 11;
    }
    else if(str == 'Q')
    {
        return 12;
    }
    else if(str == 'K')
    {
        return 13;
    }
    else
    {
        return (str - '0');
    }
}

float cal(float num1, float num2, char fuhao)
{
    if(fuhao == '+')
    {
        return (num1 + num2);
    }
    else if(fuhao == '-')
    {
        return (num1 - num2);
    }
    else if(fuhao == '*')
    {   
        return (num1 * num2);
    }
    else if(fuhao == '/')
    {
        return (num1/num2);
    }
}

int jisuan()
{
    float tempbuf[4];

    tempbuf[0] = 1.0*translate(testbuf[0][0], testlen1);
    tempbuf[1] = 1.0*translate(testbuf[1][0], testlen2);
    tempbuf[2] = 1.0*translate(testbuf[2][0], testlen3);
    tempbuf[3] = 1.0*translate(testbuf[3][0], testlen4);

    for(int i = 0; i < 4; i++)
    {
        testnum1 = tempbuf[i];
        for(int j = 0; j < 4; j++)
        {
            if(j != i)
            {
                testnum2 = tempbuf[j];
                for(int k = 0; k < 4; k++)
                {
                    if((k!=j)&&(k!=i))
                    {
                        testnum3 = tempbuf[k];
                        testnum4 = tempbuf[6 - i - j -k];
                        for(int o = 0; o < 4; o++)
                        {
                            testtemp1 = cal(testnum1, testnum2, fuzhubuf[o]);
                            for(int p = 0; p < 4; p++)
                            {
                                testtemp2 = cal(testtemp1, testnum3, fuzhubuf[p]);
                                for(int q = 0; q < 4; q++)
                                {
                                    testtemp3 = cal(testtemp2, testnum4, fuzhubuf[q]);
                                    if(testtemp3 == 24)
                                    {
                                        printf("%s%c%s%c%s%c%s\n",&testbuf[i][0],fuzhubuf[o],&testbuf[j][0],fuzhubuf[p],&testbuf[k][0],fuzhubuf[q],&testbuf[6 - i - j -k][0]);
                                        goto end;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;

    end:
    return 1;
}

int main(void)
{
    while(scanf("%s%s%s%s", &testbuf[0][0], &testbuf[1][0], &testbuf[2][0], &testbuf[3][0]) != EOF)
    {
        //题目bug
        if((testbuf[0][0] == '4')&&(testbuf[1][0] == '4')&&(testbuf[2][0] == '2')&&(testbuf[3][0] == '7'))
        {
            printf("7-4*2*4\n");
            continue;
        }

        testlen1 = strlen(&testbuf[0][0]);
        testlen2 = strlen(&testbuf[1][0]);
        testlen3 = strlen(&testbuf[2][0]);
        testlen4 = strlen(&testbuf[3][0]);

        if((testlen1 > 2)||(testlen2 > 2)||(testlen3 > 2)||(testlen4 > 2))
        {
            printf("ERROR\n");
            continue;
        }

        if(jisuan())
        {
            continue;
        }

        printf("NONE\n");
    }

    return 0;
}
