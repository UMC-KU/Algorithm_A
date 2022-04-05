import math
NUM = input()
NUM = int(NUM)

def func(num) :
    x = math.floor(num/10)
    y = math.floor(num%10)
    z = x+y
    
    newNum = math.floor(y*10) +math.floor(z%10)
    return newNum

def checking(num) :
    a = func(num)
    if (a == NUM) :
        return 'TRUE'
    else :
        return a

i = 1
newNum = NUM

while True :
    var = checking(newNum)
    if(var == 'TRUE') :
        print(i)
        break
    else :
        newNum = var
        i = i+1