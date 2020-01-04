'''
@description: 火车进站
@param {type} 
@return: 
'''
def handle(pre_station, in_station, after_station):
    if not pre_station and not in_station:  # 所有车均已出栈
        result.append(" ".join(after_station))
    else:
        if in_station:  # 先出栈
            after_station.append(in_station.pop())
            handle(pre_station,in_station,after_station)
            in_station.append(after_station.pop())
        if pre_station:  # 再入栈
            in_station.append(pre_station.pop(0))
            handle(pre_station,in_station,after_station)
            pre_station.insert(0,in_station.pop())
    return result
number=int(input())
pre_station=[a for a in input().split()]
result=[]
handle(pre_station,[],[])
result.sort()
for item in result:
    print(item)