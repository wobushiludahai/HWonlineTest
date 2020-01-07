'''
@description: 统计大写字母个数
@param {type} 
@return: 
'''
while True:
    try:
        s = input()
        count = 0
        for x in s:
            if 'A'<=x<='Z':
                count += 1
        print(count)
    except:
        break