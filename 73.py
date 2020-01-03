'''
@description: 
@param {type} 
@return: 
'''
while True:
    try:
        [year, month, day] = [int(i) for i in input().split()]
        monthday = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        days = sum(monthday[:month - 1]) + day
        if month > 2 and year % 4 == 0 or year % 400 == 0 and year % 100 != 0:
            days += 1
        print(days)
    except:
        break