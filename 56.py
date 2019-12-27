'''
@description: iNOC产品部-完全数计算
@param {type} 
@return: 
'''

while True:
    try:
        a = int(input())
        print(len(list(filter(lambda x: x < a, [6, 28, 496, 8128]))))
    except:
        break