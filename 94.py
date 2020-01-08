'''
@description: 计票统计
@param {type} 
@return: 
'''
while 1:
    try:
        num = 0
        d = {}
        n = int(input())
        m = input().split()
        rs = int(input())
        tp = input().split()
        for i in tp:
            d.setdefault(i,0)
            d[i]=d[i]+1
        for j in m:
            if j in d.keys():
                print(j+" : "+str(d[j]))
            else:
                print(j+" : 0")
        for k in d.keys():
            if k not in m:
                num = num + int(d[k])
        print("Invalid : "+str(num))
    except:
        break