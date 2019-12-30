'''
@description: 查找两个字符串a，b中的最长公共子串
@param {type} 
@return: 
'''

while True:
    try:
        a = input()
        b = input()
        n = 0
        s = []
        if len(a) > len(b):
            a, b = b, a
        for i in range(len(a)):
            if a[i-n:i+1] in b:
                s = a[i-n:i+1]
                n += 1
        print(s)
    except:
        break