'''
@description: 201301 JAVA题目2-3级
@param {type} 
@return: 
'''
def run(n, m):
    if n == 0 or m == 0:
        return 1
    else:
        return run(n-1, m) + run(n, m-1)
  
while True:
    try:
        n, m = map(int, input().split())
        print(run(n, m))
    except:
        break