'''
@description: 自守数
@param {type} 
@return: 
'''
while True:
    try:
        n = int(input())
        c = 0
        for i in range(0,n+1):
            m = (i*i)%(10**len(str(i)))
            if m == i :
                c+=1
        print(c)
    except:
        break