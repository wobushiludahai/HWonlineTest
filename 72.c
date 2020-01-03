
/**
 * @description: 百钱买白鸡的问题
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum;

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        //计算
        for(int i = 0; i <= 20; i++)
        {
            for(int j = 0; j <= 33; j++)
            {
                if(((100-i-j)%3==0)&&((i*5+j*3+(100-i-j)/3)==100))
                {
                    printf("%d %d %d\n",i,j,(100-i-j));
                    break;
                }
            }
        }
        //直接输出
        // printf("0 25 75\n4 18 78\n8 11 81\n12 4 84\n");
    }

    return 0;
}
