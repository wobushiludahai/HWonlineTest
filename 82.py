'''
@description: 将真分数分解为埃及分数
@param {type} 
@return: 
'''
while True:
    try:
        a = input().split('/')
        up = int(a[0])
        down = int(a[1])
        res = ''
        while up != 1:
            if down%(up-1) == 0:
                res = res + '1/' + str(down//(up-1)) + '+'
                up = 1
            else:
                q = down//up
                res = res + '1/'+ str(q+1) + '+'
                up = up - down%up
                down = down*(q+1)
                if down%up == 0:
                    down = down//up
                    up = 1
        res = res + '1/' + str(down)
        print(res)
    except:
        break