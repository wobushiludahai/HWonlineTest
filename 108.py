'''
@description: 求最小公倍数
@param {type} 
@return: 
'''
while True:
    try:
        a, b = map(int,input().split())
        c = a
        d = b
        while b:
            a, b = b, a%b
        print(c*d//a)
    except:
        break
