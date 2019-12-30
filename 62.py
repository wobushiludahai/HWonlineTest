'''
@description: 查找输入整数二进制数中1的个数
@param {type} 
@return: 
'''

while True:
    try:
        n = int(input())
        sbit = bin(n)
        print(sbit.count('1'))
    except:
        break