'''
@description: 配置文件恢复
@param {type} 
@return: 
'''
lst1 = 'reset,reset board,board add,board delet,reboot backplane,backplane abort'.split(',')
lst2 = 'reset what,board fault,where to add,no board at all,impossible,install first'.split(',')
 
while True:
    try:
        s = input()
        if s in lst1:
            index = lst1.index(s)
            print(lst2[index])
        else:
            print('unkown command')
    except:
        break