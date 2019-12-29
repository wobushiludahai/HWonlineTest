
/**
 * @description: 查找组成一个偶数最接近的两个素数
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum;
int baocun1,baocun2,record;
int temp1, temp2,temp;
int issushu(int num)
{
    int temp = sqrt(num);
    for(int i = 2; i <= temp; i++)
    {
        if(num%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        temp = testnum;
        record = testnum;
        for(int i = 2; i <= temp; i++)
        {
            if(issushu(i)&&(issushu(testnum - i)))
            {
                if(abs(i - testnum + i) < record)
                {
                    record = abs(i - testnum + i);
                    baocun1 = i;
                    baocun2 = testnum - i;
                }
            }
        }
        printf("%d\n%d\n", baocun1, baocun2);
    }

    return 0;
}
