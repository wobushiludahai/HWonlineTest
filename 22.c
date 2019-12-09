/**
 * @description: 汽水瓶
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testresult = 0;
int testnum;
int testcal(int test)
{
    int temp;
    int returnnum = test/3;
    temp = returnnum + test%3;
    if((test == 3)||(test == 2))
    {
        return 1;
    }
    else if(test == 1)
    {
        return 0;
    }
    
    return(returnnum + testcal(temp));
}

int main(void)
{
    while(scanf("%d", &testnum)!=EOF)
    {
        if(testnum!=0)
        {
            printf("%d\n", testcal(testnum));   
        }
    }
    return 0;
}
