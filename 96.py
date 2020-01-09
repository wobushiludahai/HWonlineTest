'''
@description: 表示数字
@param {type} 
@return: 
'''
while True:
    try:
         
        line_a = str(input())
        line_b = ""
        for i in range(len(line_a)):
            if line_a[i].isalpha():
                line_b += line_a[i]
            else:
                line_b += "*" + line_a[i] + "*"
        print(line_b.replace("**",""))
    except:
        break