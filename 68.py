'''
@description: 成绩排序
@param {type} 
@return: 
'''

import sys
while True:
    try:
        num=int(sys.stdin.readline().strip())#人数
        flag=int(sys.stdin.readline().strip())#正序
        value_list=[]
        for i in range(0,num):
            item=[each for each in sys.stdin.readline().strip().split()]
            item[1]=int(item[1])
            value_list.append(item)
        if flag==0:
            sortlist=sorted(value_list,key=lambda x:x[1],reverse=True)
        else:sortlist=sorted(value_list,key=lambda x:x[1],reverse=False)
        for each in sortlist:
            print (str(each[0])+' '+str(each[1]))
    except:
        # print e.message
        break