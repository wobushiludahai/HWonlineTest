'''
@description: 字符统计
@param {type} 
@return: 
'''
while True:
    try:
        list1=[]
        arr = input()
        dic = {}
        for i in arr:
            if not (i.isalpha() or i.isdigit() or i.isspace()):
                continue
            else:
                if i in dic:
                    dic[i] += 1
                else:
                    dic[i]=1
        dic=sorted(dic.items(),key = lambda x:x[0])#????ASC?
        dic=sorted(dic,key = lambda x:x[1],reverse=True)#???????
        print(''.join(k for (k , v) in dic))
    except:
        break