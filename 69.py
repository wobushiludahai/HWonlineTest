'''
@description: 矩阵乘法
@param {type} 
@return: 
'''
while True:
    try:
 
        row1 = int(input())
        row2 = int(input())
        col2 = int(input())
        matrix1 = []
        matrix2 = []
        b = []
         
        def muti(s1,s2):
            add = 0
            for i in range(len(s1)):
                add += s1[i] * s2[i]
            return add
 
        for i in range(row1):
            line=[int(x) for x in input().split()]
            matrix1.append(line)
        for i in range(row2):
            line=[int(x) for x in input().split()]
            matrix2.append(line)
 
        for i in range(col2):
            a = []
            for j in range(row2):
                a.append(matrix2[j][i])
            b.append(a)
        for i in range(row1):
             c = []
             for j in range(col2):
                 c.append(muti(matrix1[i],b[j]))
             c=list(map(str,c))
             print(' '.join(c))

    except:
        break