/**
 * @description: ��������ѧУ����һЩͬѧһ����һ���ʾ���飬Ϊ��ʵ��Ŀ͹��ԣ������ü����������N��1��1000֮������������N��1000����
 * ���������ظ������֣�ֻ����һ������������ͬ����ȥ������ͬ������Ӧ�Ų�ͬ��ѧ����ѧ�š�Ȼ���ٰ���Щ����С�������򣬰����źõ�˳��ȥ��
 * ͬѧ�����顣����Э��������ɡ�ȥ�ء��롰���򡱵Ĺ���(ͬһ��������������ܻ��ж������ݣ�ϣ���������ȷ����)��
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
int testnum = 0;
int cmp(const void *a, const void *b)
{
    return(*((int *)a) - *((int *)b));
}
int testbuf[1005] = {0};
int temp = 0;

int main(void)
{
    while(EOF !=(scanf("%d", &testnum)))
    {
        for(int i = 0; i < testnum; i++)
        {
            scanf("%d", &testbuf[i]);
        }
        qsort(testbuf, testnum, sizeof(int), cmp);
        for(int i = 0; i < testnum; i++)
        {
            if(temp != testbuf[i])
            {
                printf("%d\n", testbuf[i]);
            }
            temp = testbuf[i];
        }
    }

    return 0;
}