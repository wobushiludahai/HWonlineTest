'''
@description: 矩阵乘法计算量估算
@param {type} 
@return: 
'''
while True:
    try:
        n=int(input())
        arr=[]
        stack=[]
        result=0
        for i in range(n):
            arr.append(list(map(int,input().split())))
        p=input()
        for i in range(3*n-2):
            if p[i]=='(':
                pass
            elif p[i]==')':
                a=stack.pop()
                b=stack.pop()
                result=result+b[1]*a[1]*b[0]
                stack.append([b[0],a[1]])
            else:
                stack.append(arr[ord(p[i])-65])
        print(result)
    except:
        break