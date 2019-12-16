
/**
 * @description: 字符串加密
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// #include <ctype.h>

char testbuf1[10000] = {0};
char testbuf2[10000] = {0};
char keybuf[100] = {0};
char result[100] = {0};
char fuzhu[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int jieguofuzhu = 0;

void encrypt(char *key, char *data, char *encrypt)
{
    int templen;

    templen = strlen(data);

    for(int i = 0; i < templen; i++)
    {
        if((data[i] >= 'a')&&(data[i] <= 'z'))
        {
            data[i] = result[data[i] - 'a'] + 'a';
        }

        if((data[i] >= 'A')&&(data[i] <= 'Z'))
        {
            data[i] = result[data[i] - 'A'] + 'A';
        }

    }
}

void zhuandaxie(char *str)
{
    int templen;

    templen = strlen(str);

    for(int i = 0; i < templen; i++)
    {
        if((str[i] >= 'a')&&(str[i] <= 'z'))
        {
            str[i] = str[i] - 'a' + 'A';
        }
    }
}

void quchongfu(char *str)
{
    int templen;

    templen = strlen(str);

    for(int i = 0; i < templen; i++)
    {
        if(str[i] != 0)
        {
            for(int j = i + 1; j < templen; j++)
            {
                if(str[j] == str[i])
                {
                    str[j] = 0;
                }
            }
        }
    }

    for(int i = 0; i < templen; i++)
    {
        if(str[i] != 0)
        {
            fuzhu[str[i] - 'A'] = 0;
            result[jieguofuzhu++] = str[i] - 'A';
        }
    }

    for(int i = 0; i < 26; i++)
    {
        if(fuzhu[i] != 0)
        {
            result[jieguofuzhu++] = fuzhu[i] - 'A';
        }
    }
}

int main(void)
{
    while (scanf("%s", keybuf) != EOF)
    {
        zhuandaxie(keybuf);
        quchongfu(keybuf);
        scanf("%s", testbuf1);
        encrypt(keybuf, testbuf1, testbuf2);
        printf("%s\n", testbuf1);
        //此处各种初始化很重要
        for(int i = 0; i < 26; i++)
        {
            fuzhu[i] = 'A' + i;
        }
        memset(keybuf, 0, 100);
        memset(result, 0, 100);
        memset(testbuf1, 0, 10000);
        jieguofuzhu = 0;
    }

    return 0;
}
