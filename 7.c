/**
 * @description: 写出一个程序，接受一个正浮点数值，输出该数值的近似整数值。如果小数点后数值大于等于5,向上取整；小于5，则向下取整。
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float test;

int main(void)
{
    scanf("%f", &test);

    printf("%d", (int)(test + 0.5));
    return 0;
}
