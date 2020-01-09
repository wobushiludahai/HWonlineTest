'''
@description: 记负均正Ⅱ
@param {type} 
@return: 
'''
while True:
    try:
        inlist=list(map(int,input().split()))
        fushu=[]
        zhengshu=[]
        for i in inlist:
            if i<0:
                fushu.append(i)
            else:
                zhengshu.append(i)
        print(len(fushu))
        zhengshu_len=len(zhengshu)
        sum=0
        if zhengshu_len==0:
            print('0.0')
        else:
            for j in zhengshu:
                sum+=j
            print(round((sum/zhengshu_len),1 ))
    except:
        break