
/**
 * @description: 迷宫问题
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
    int pre;    //记录前置节点
}ttest;

int book[10][10] = {0};
int map[10][10] = {0};
ttest queue[100] = {0};

void print(ttest a)
{
	if(a.pre==-1)  
	{
		printf("(%d,%d)\n",a.x,a.y);
		return ;
	}
	else
	{
		print(queue[a.pre]);
		printf("(%d,%d)\n",a.x,a.y);
	}
}

int main(void)
{
	int i,j;
	int head,tail;
    int testx,testy;
	int next[4][2]={{0,1},{0,-1},{1,0},{-1,0}}; //定义出四个方向
	int flag=0;

    while (scanf("%d%d",&testx,&testy) !=EOF)
    {
        for(i = 0; i < testx; i++)
        {
            for(j = 0; j < testy; j++)
            {
                scanf("%d", &map[i][j]);
            }
        }

	    head=0;
	    tail=0;
        memset(queue, 0, (100*sizeof(ttest)));
	    queue[tail].x=0;
	    queue[tail].y=0;
	    queue[tail].pre=-1;
        memset(book, 0, 100*sizeof(int));
	    book[0][0]=1;
	    tail++;
        flag = 0;
        while(head < tail)
        {
		    for(i=0;i<4;i++)  //从当前点往四周探索
		    {
		    	int nextx=queue[head].x+next[i][0];
		    	int nexty=queue[head].y+next[i][1]; //实现移动
		    	if(nextx<0||nextx>testx||nexty<0||nexty>testy) //超出了边界则跳出
		    	{
		    		continue;
		    	}
		    	if(book[nextx][nexty]==0&&map[nextx][nexty]==0) //当点未被访问过且是可行点才入队
		    	{
		    		book[nextx][nexty]=1;
		    		queue[tail].x=nextx;
		    		queue[tail].y=nexty;
		    		queue[tail].pre=head;
		    		tail++;
		    	}
		    	if(nextx==(testx-1)&&nexty==(testy - 1)) //到达了目的地，毫无疑问地跳出结束循环
		    	{
		    		flag=1;
		    		break;
		    	}
		    }
		    if(flag) //到达目的地后调用函数输出路径
		    {
		    	print(queue[tail-1]);
		    	break;
		    }
		    head++; //出队
        }
    }

    return 0;
}
