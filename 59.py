'''
@description: 找出字符串中第一个只出现一次的字符
@param {type} 
@return: 
'''

while True:
    try:
        res = input()
        count = []
        jilu = False
        for i in res:
            if res.count(i) ==1:
                print(i)
                jilu = True
                break
        if jilu == False:
            print(-1)
    except:
        break