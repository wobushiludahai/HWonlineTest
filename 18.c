/**
 * @description: 识别有效的IP地址和掩码并进行分类统计。
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testip[8];
int numA = 0,numB = 0,numC = 0,numD = 0,numE = 0,errIP = 0,priIP = 0;

int simplejudge(int a)
{
    if (a == 254 || a == 252 || a == 248 ||a == 240 || a == 224 || a == 192 || a == 128 | a == 0)
        return 1;
    return 0;
}

int main(void)
{
    while(scanf("%d.%d.%d.%d~%d.%d.%d.%d",&testip[0],&testip[1],&testip[2],&testip[3],&testip[4],&testip[5],&testip[6],&testip[7])!=EOF)
    {
        for(int i = 0; i < 8; i++)
        {
            if((testip[i] < 0)||(testip[i] > 255))
            {
                errIP++;
                goto Next;
            }
        }

        if((testip[4] == 0)||(testip[7] == 255))
        {
            errIP++;
            goto Next;
        }

        for(int i = 4; i < 8; i++)
        {
            if(testip[i] == 255) continue;
            if(0 == simplejudge(testip[i]))
            {
                errIP++;
                goto Next;
            }
            for(int j = i+1; j < 8;j++)
            {
                if(testip[j]!=0)
                {
                    errIP++;
                    goto Next;
                }
            }
            break;
        }

        if (testip[0] >= 1 && testip[0] <= 126) numA++;
        else if (testip[0] >= 128 && testip[0] <= 191) numB++;
        else if (testip[0] >= 192 && testip[0] <= 223) numC++;
        else if (testip[0] >= 224 && testip[0] <= 239) numD++;
        else if (testip[0] >= 240 && testip[0] <= 255) numE++;
        if (testip[0] == 10 || (testip[0] == 172 && testip[1] >= 16 && testip[1] <= 31) || (testip[0] == 192 && testip[1] == 168)) priIP++;

        Next:;
    }

    printf("%d %d %d %d %d %d %d",numA,numB,numC,numD,numE,errIP,priIP);

    return 0;
}
