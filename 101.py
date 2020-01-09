'''
@description: 输入整型数组和排序标识，对其元素按照升序或降序进行排序
@param {type} 
@return: 
'''
while True:
    try:
        a,b,c=input(),map(int,input().split()),input()
        print(" ".join(map(str,sorted(b))) if c=="0" else " ".join(map(str,sorted(b,reverse=True))))
    except:
        break