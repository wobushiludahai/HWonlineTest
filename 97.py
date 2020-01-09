'''
@description: 记负均正
@param {type} 
@return: 
'''
while True:
    try:
        n=int(input())
        data_list=map(int,input().split())
        num=0
        res=0
        geshu=0
        for i in data_list:
            if i>0:
                num+=1
                res+=i
            elif i<0:
                geshu+=1
        res = res/num
        print("%d %.1f"%(geshu,res))
    except:
        break