'''
@description: 尼科彻斯定理
@param {type} 
@return: 
'''
while True:
    try:
        N = int(input())
        a = int(N ** 2 - N + 1)
        lst = [str(a)]
        for i in range(1, N):
            lst.append(str(a + 2 * i))
        print('+'.join(lst))
    except:
        break