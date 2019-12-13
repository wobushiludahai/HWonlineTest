
/**
 * @description: 字符串加解密
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void encrypt(char *test)
{
    char temptest[105] = {0};
    int templen = strlen(test);
    int i;

    for(i = 0; i < templen; i++)
    {
        if((test[i] >= 'a')&&(test[i] <= 'z'))
        {
            temptest[i] = 'A' + ((test[i] - 'a') + 1) % 26;

        }
        else if ((test[i] >= 'A')&&(test[i] <= 'Z'))
        {
            temptest[i] = 'a' + ((test[i] - 'A') + 1) % 26;
        }
        else if ((test[i] >= '0') && (test[i] <= '9'))
        {
            temptest[i] = '0' + ((test[i] - '0' + 1)%10);
        }
        else
        {
            temptest[i] = test[i];
        }
    }
    temptest[i] = test[i];
    printf("%s\n", temptest);
}

void decrypt(char *test)
{
    char temptest[105] = {0};
    int templen = strlen(test);
    int i;

    for(i = 0; i < templen; i++)
    {
        if((test[i] >= 'a')&&(test[i] <= 'z'))
        {
            temptest[i] = 'A' + ((test[i] - 'a') + 25) % 26;

        }
        else if ((test[i] >= 'A')&&(test[i] <= 'Z'))
        {
            temptest[i] = 'a' + ((test[i] - 'A') + 25) % 26;
        }
        else if ((test[i] >= '0') && (test[i] <= '9'))
        {
            temptest[i] = '0' + ((test[i] - '0' + 9)%10);
        }
        else
        {
            temptest[i] = test[i];
        }
    }
    temptest[i] = test[i];
    printf("%s\n", temptest);
}

char testbuf[105] = {0};

int main(void)
{
    while(scanf("%s", testbuf)!=EOF)
    {
        encrypt(testbuf);
        scanf("%s", testbuf);
        decrypt(testbuf);
    }

    return 0;
}
