'''
@description: MP3光标位置
@param {type} 
@return: 
'''
while True:
    try:
        num=int(input())
        command=input()
        head,tail,i =1,4,1
        if(num<=4):
            for ci in command:
                if (ci=='U'):
                    if i==1:
                        i=num
                    else:
                        i-=1
                else:
                    if i==num:
                        i=1
                    else:
                        i+=1
            head,tail=1,num
        else:
            for ci in command:
                if (ci=='U'):
                    if i==1:
                        i=num
                        head,tail=num-3,num
                    else:
                        i-=1
                        if i<head:
                            head,tail=i,i+3
                else:
                    if i==num:
                        i=1
                        head,tail=1,4
                    else:
                        i+=1
                        if i>tail:
                            head,tail=i-3,i
        ans=list(range(head,tail+1))
        print(' '.join(str(j) for j in ans))
        print(i)
    except:
        break