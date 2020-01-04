
/**
 * @description: 计算字符串的相似度(借鉴于52题)
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int min(int a, int b, int c)
{
    return (a < b ?(a < c? a : c):(b < c? b : c));
}

char testbuf1[1000] = {0};
char testbuf2[1000] = {0};
int testlen1, testlen2;

int main(void)
{
    while(scanf("%s %s",testbuf1, testbuf2) != EOF)
    {
        testlen1 = strlen(testbuf1);
        testlen2 = strlen(testbuf2);
        int dp[testlen1+1][testlen2+1];
        dp[0][0] = 0;
        for(int i = 1; i <= testlen1; i++)
        {
            dp[i][0] = i;
        }
        for(int i = 1; i <= testlen2; i++)
        {
            dp[0][i] = i;
        }

        for(int i = 1; i <= testlen1;i++)
        {
            for(int j = 1; j <= testlen2; j++)
            {
                if(testbuf1[i-1] == testbuf2[j-1])
                {
                    dp[i][j] = dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = min(dp[i-1][j] + 1, dp[i][j-1]+1, dp[i-1][j-1]+1);
                }
            }
        }
        printf("1/%d\n", 1+dp[testlen1][testlen2]);
    }

    return 0;
}