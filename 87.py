'''
@description: 密码强度等级
@param {type} 
@return: 
'''
while True:
    try:
        s=input()
        res=0
        if len(s)<=4:
            res+=5
        elif 5<=len(s)<=7:
            res+=10
        else:
            res+=25
        alpha_list=[]
        digit_list = []
        symbol_list=[]
        for i in s:
            if i.isalpha():
                alpha_list.append(i)
            if i.isdigit():
                digit_list.append(i)
            else:
                symbol_list.append(i)
        l=[0,0]
        for i in alpha_list:
            if ord(i) in range(97,123):
                l[0]=1
            if ord(i) in range(65,91):
                l[1]=1
        sum=l[0]+l[1]
        if sum==1:
            res+=10
        if sum==2:
            res+=20
        if len(digit_list)==1:
            res+=10
        if len(digit_list)>1:
            res+=20
        if len(symbol_list)==1:
            res+=10
        if len(symbol_list)>1:
            res+=25
        if len(alpha_list)!=0 and len(digit_list)!=0:
            res+=2
        elif len(alpha_list)!=0 and len(digit_list)!=0 and len(symbol_list)!=0:
            res+=3
        elif sum==2 and len(digit_list)!=0 and len(symbol_list)!=0:
            res+=5
        else:
            pass
        if res>=90:
            print('VERY_SECURE')
        elif res>=80:
            print('SECURE')
        elif res>=70:
            print('VERY_STRONG')
        elif res>=60:
            print('STRONG')
        elif res>=50:
            print('AVERAGE')
        elif res>=25:
            print('WEAK')
        else:
            print('VERY_WEAK')
    except:
        break