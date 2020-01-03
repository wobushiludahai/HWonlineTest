'''
@description: 百钱买百鸡的问题
@param {type} 
@return: 
'''
# 直接输出
while True:
    try:
        a = input()
        print("0 25 75")
        print("4 18 78")
        print("8 11 81")
        print("12 4 84")
    except:
        break

# 计算
while True:
    try:
        k=input()
        for a in range(21):
            for b in range(33):
                c=(100-5*a-3*b)*3
                if c>=0 and a+b+c==100:
                    print(str(a)+' '+str(b)+' '+str(c))
    except:
        break