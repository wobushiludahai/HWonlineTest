'''
@description: 扑克牌大小
@param {type} 
@return: 
'''
A = '3 4 5 6 7 8 9 10 J Q K A 2 joker JOKER'.split(' ')
while 1:
    try:
        s = input()
        if not s:
            break
    except:
        break
    a, b = s.split('-')
    w = None
    p, q = a.split(' '), b.split(' ')
    if len(q) != len(p):
        for t in p, q:
            if len(t) == 2 and t[0] == 'joker':
                w = ' '.join(t)
                break
            elif len(t) == 4:
                w = ' '.join(t)
        if not w:
            w = 'ERROR'
    elif A.index(q[0]) > A.index(p[0]):
        w = b
    else:
        w = a
    print (w)