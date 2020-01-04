
/**
 * @description: 将真分数分解为埃及分数
 * @param {type} 
 * @return: 
 */
/*第一步：如果是真分数的话：
  如果 a 不为 1 时：
    a/b = (1/(b/a+1) + (a-b%a)/(b*(b/a+1)));
    并且有个小分支可以简化计算:
        如果 b%(a-1) == 0:
        那么：a/b = (a-1+1)/b = (a-1)/b + 1/ b = 1/[b/(a-a)] + 1/b;
          
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    char ch;
    int a, b;
    while(scanf("%d%c%d", &a, &ch, &b) != EOF){
        if(a > b || a < 1 || b < 2) break;
        while(a != 1){
            if(b % (a-1) == 0){
                printf("1/%d+", b/(a-1));
                a = 1;
            }else{
                int c;
                c = b/a+1;
                a = a-b%a;
                b = b*c;
                printf("1/%d+", c);
                if(b%a==0){
                    b = b/a;
                    a = 1;
                }
            }
        }
        printf("1/%d\n", b);
    }
    return 0;
}