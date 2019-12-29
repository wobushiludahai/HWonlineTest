'''
@description: 放苹果
@param {type} 
@return: 
'''
def func(m,n):
    if m == 0 or n == 1:
        return 1
    if n > m:
        return func(m,m)
    else:
        return func(m,n-1) + func(m-n,n)
while True:
    try:
        a = list(map(int,input().split()))
        print(func(a[0],a[1]))
 
    except:
        break