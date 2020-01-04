'''
@description: 字符串匹配
@param {type} 
@return: 
'''
while True:
    try:
        a,b=set(input()),set(input())
        print ("true" if a&b==a else "false")
    except:
        break
