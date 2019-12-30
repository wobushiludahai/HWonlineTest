'''
@description: DNA序列
@param {type} 
@return: 
'''

while True:
    try:
        a = input()
        n = int(input())
        m = len(a)
        res = 0
        re = []
        for i in range(m - n + 1):
            temp = a[i:i+n].count('G') + a[i:i+n].count('C')
            if res < temp:
                res = temp
                re = a[i:i+n]
        print(re)
    except:
        break