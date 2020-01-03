'''
@description: 字符串通配符
@param {type} 
@return: 
'''
while True:
    try:
        a=input()
        b=input()
        x=0
        y=0
        k=1
        while x<len(a)-1 and y<len(b)-1:
            if a[x]==b[y] or a[x]=='?':
                x+=1
                y+=1
            elif a[x]=='*':
                if a[x+1]==b[y+1] or a[x+1]==False or b[x+1]==False:
                    x+=1
                    y+=1
                else:y+=1
            else:
                k=0
                break
        if k==1:
            print('true')
        else:
            print('false')
    except:
        break