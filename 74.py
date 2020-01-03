'''
@description: 参数解析
@param {type} 
@return: 
'''
while True:
    try:
        s = input().split()
        print(len(s))
        for param in s:
            print(param)
    except:
        break