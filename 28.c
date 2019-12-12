
/**
 * @description: 素数伴侣
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int sushujudge(int num)
{
    int temp = sqrt(num);
    for(int i = 2; i <= temp; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int testnum;
int testbuf[105] = {0};
int max = 0;
int OddArray[105] = {0};
int EvenArray[105] = {0};
int Odd2Even[105][105] = {0};
int EvenNum = 0;
int OddNum = 0;
int i;
int Result[105] = {0};
int visited[105] = {0};

int dfs(int tmpOddPos)
{
    int i;
    for (i = 0; i < EvenNum; i++)
    {
        if (Odd2Even[tmpOddPos][i]==1 && !visited[i])
        {
            visited[i] = 1;
            if (Result[i] == 0 || dfs(Result[i]-1))
            {
                Result[i] = tmpOddPos+1;
                return 1;
            }
        }
    }
    return 0;
}

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        //初始化
        max=0;
        EvenNum = 0;
        OddNum = 0;
        memset(Result, 0, sizeof(Result));
        memset(Odd2Even, 0, sizeof(Odd2Even));

        for(i = 0; i < testnum; i++)
        {
            scanf("%d", &testbuf[i]);
            if (testbuf[i] % 2 == 0)
            {//建立偶数队列
                EvenArray[EvenNum++] = testbuf[i];
            }
            else
            {//建立奇数队列
                OddArray[OddNum++] = testbuf[i];
            }
        }

        for (i = 0; i < OddNum; i++)
            for (int j = 0; j < EvenNum; j++)
            {
                if (sushujudge(OddArray[i] + EvenArray[j]))
                    Odd2Even[i][j] = 1;
            }

        for (i = 0; i < OddNum; i++)
        {
            memset(visited, 0, sizeof(visited));
            if (dfs(i))
                max++;
        }
        printf("%d\n", max);
    }

    return 0;
}
