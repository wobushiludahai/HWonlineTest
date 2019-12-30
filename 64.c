
/**
 * @description: MP3光标位置
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum;
char testbuf[1000] = {0};
int buflen;
int position, head;

void positionchg(char zimu)
{
    if (testnum <= 4)
    {
        if(zimu == 'U')
        {
            if(position == 1)
            {
                position = testnum;
            }
            else
            {
                position -= 1;
            }
        }
        else
        {
            if(position == testnum)
            {
                position = 1;
            }
            else
            {
                position++;
            }
        }
    }
    else
    {
        if(zimu == 'U')
        {
            if(position == 1)
            {
                position = testnum;
                head = testnum - 3;
            }
            else
            {
                if(head == position)
                {
                    head--;
                }
                position -= 1;
            }
        }
        else
        {
            if(position == testnum)
            {
                head = 1;
                position = 1;
            }
            else
            {
                if(position == (head + 3))
                {
                    head++;
                }
                position++;
            }
        }
    }
}

int main(void)
{
    while(scanf("%d", &testnum) != EOF)
    {
        head = 1;
        position = 1;
        scanf("%s", testbuf);
        buflen = strlen(testbuf);
        for(int i = 0; i < buflen; i++)
        {
            positionchg(testbuf[i]);
        }

        for(int i = 0; i < 4 && i < testnum; i++)
        {
            printf("%d ", head + i);
        }
        printf("\n");
        printf("%d\n", position);
    }

    return 0;
}
