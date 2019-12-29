'''
@description: 输入n个整数，输出其中最小的K个
@param {type} 
@return: 
'''
while True:
    try:
        count=int(input().split()[1])
        array=list(map(int,input().strip().split()))
        print(" ".join(map(str,sorted(array)[:count])))
    except:break