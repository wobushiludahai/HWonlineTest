
/**
 * @description: 整数与IP地址的转换
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

unsigned int fuzhu1 = 0x100;
unsigned int fuzhu2 = 0x10000;
unsigned int fuzhu3 = 0x1000000;

int a,b,c,d;
unsigned int e;

int main(void)
{
    while(scanf("%d.%d.%d.%d", &a, &b, &c, &d)!=EOF)
    {
        scanf("%u", &e);

        printf("%u\n",(a*fuzhu3+b*fuzhu2+c*fuzhu1+d));
        a = e/fuzhu3;
        e -= a*fuzhu3;
        b = e/fuzhu2;
        e -= b*fuzhu2;
        c = e/fuzhu1;
        d = e - c*fuzhu1;
        printf("%d.%d.%d.%d\n",a,b,c,d);
    }

    return 0;
}
