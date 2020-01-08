'''
@description: 合法IP
@param {type} 
@return: 
'''
while True:
    try:
        inStr = input().split('.')
        flag = 0
        for i in inStr:
            if int(i) >= 0 and int(i) <= 255:
                pass
            else:
                flag = 1
        if flag == 0:
            print('YES')
        else:
            print('NO')
    except:
        break