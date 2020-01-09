'''
@description: 
@param {type} 
@return: 
'''
import bisect
while True:
    try:
        n = int(input())
        l = map(int,input().split())
        b = []
        res = []
        for i in l:
            pos = bisect.bisect_left(b,i)
            res+=[pos+1]
            if pos == len(b):
                b.append(i)
            else:
                b[pos]=i
        print(len(b))
        #print(res)
    except:
        break