'''
@description: 等差数列
@param {type} 
@return: 
'''
while True:
    try:
        n=eval(input())
        num=0
        for i in range(n):
            num+=2+3*i
        print(num)
    except:
        break