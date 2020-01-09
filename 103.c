
/**
 * @description: a template for test
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum;
int testbuf[1010];
int fuzhu[1010];
int max;
int temp;

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        for(int i = 1; i <= testnum; i++)
        {
            scanf("%d", &testbuf[i]);
        }
		fuzhu[1] = 1;

		for(int i = 2;i <= testnum;i ++)
		{
			temp = 0;
			for(int k = 1;k < i;k ++)
			{
				if(testbuf[k] < testbuf[i] && temp < fuzhu[k])
                {
					temp = fuzhu[k];                    
                }
			 } 
			 fuzhu[i] = temp+1;
		}

		max = 0;
		for(int i = 1; i <= testnum; i++)
		{
			if(fuzhu[i] > max)
            {
			    max = fuzhu[i];                
            }
		}

		printf("%d\n",max);
    }

    return 0;
}
