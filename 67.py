'''
@description: 24点游戏算法
@param {type} 
@return: 
'''
def f(res,n):
    x = False
    if len(n) == 1:
        if n[0] ==res:
            return True
        else:
            return False
    for i in range(len(n)):
        a = n[i]
        b = n[:]
        b.remove(a)
        x = x or f(res-a,b) or f(res*a,b) or f(res/a,b) or f(res+a,b)
    return x
while True:
    try:
        n = input().split()
        flag = False
        if len(n) != 4:
            print('false')
            break
        for i in range(4):
            n[i] = float(n[i])
        if f(24.0, n):
            print('true')
        else:
            print('false')
    except:
        break