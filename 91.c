
/**
 * @description: 201301 JAVA题目2-3级
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnumm, testnumn;
int cal(int m, int n)
{
    if((m == testnumm)&&(n == (testnumn - 1)))
    {
        return 1;
    }
    else if((m == (testnumm - 1))&&(n == testnumn))
    {
        return 1;
    }
    else
    {
        if((m != testnumm)&&(n!=testnumn))
        {
            return cal(m+1,n) + cal(m, n+1);
        }
        else if(m != testnumm)
        {
            return cal(m+1, n);
        }
        else
        {
            return cal(m, n+1);
        }
    }
}

int main(void)
{
    while(scanf("%d%d", &testnumm, &testnumn) != EOF)
    {
        printf("%d\n", cal(0, 0));
    }

    return 0;
}
