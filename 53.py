'''
@description: iNOC产品部-杨辉三角的变形
@param {type} 
@return: 
'''
try:
    while True:
        line_num = int(input())
        if line_num <= 2:
            print('0')
        elif (line_num %2) == 1:
            print('2')
        elif (line_num %4) == 0:
            print('3')
        else:
            print('4')
except:
    pass