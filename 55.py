'''
@description: (练习用)挑7
@param {type} 
@return: 
'''
while True:
    try:
        n = int(input())
        a = 0
        for i in range(1, n+1):
            if(i % 7 == 0):
                a += 1
            elif '7' in str(i):
                a += 1
        print(a)

    except:
        break
        