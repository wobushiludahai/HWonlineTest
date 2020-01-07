'''
@description: 求最大连续bit数
@param {type} 
@return: 
'''
while True:
    try:
        num = bin(int(input()))[2:]#因为前面会有0b代表二进制
        n = num.split("0")
        length = 0
        for i in n:
            if len(i) > length:
                length = len(i)
        print(length)

    except:
        break