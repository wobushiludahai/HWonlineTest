'''
@description: 公共字串计算
@param {type} 
@return: 
'''
while True:
    try:
        a = input()
        b = input()
        n = 0
        if len(a) > len(b):
            a, b = b, a
        for i in range(len(a)):
            if a[i-n:i+1] in b:
                n += 1
        print(n)
    except:
        break