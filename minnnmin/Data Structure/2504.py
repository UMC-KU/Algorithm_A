def func(stk):
    result = ''
    stk.reverse()

    while(stk):
        top = stk.pop()

        if top == '(':
            result += '2*('
        elif top == '[':
            result += '3*('
        elif top == ')':
            if not stk:
                result += '1)+'
            elif stk[-1] == '(' or stk[-1] == '[':
                result += '1)+'
            elif stk[-1] == ')' or stk[-1] == ']':
                result += '1)*'
        elif top == ']':
            if not stk:
                result += '1)+'
            elif stk[-1] == '(' or stk[-1] == '[':
                result += '1)+'
            elif stk[-1] == ')' or stk[-1] == ']':
                result += '1)*'

    result += '0'
    return eval(result)

def isright(stk):
    tmp = []
    f = False
    stk.reverse()

    for i in range(len(stk)):
        top = stk.pop()
        if top == '(' or top == '[':
            tmp.append(top)
        elif top == ')':
            if not tmp:
                f = False
                break
            elif tmp[-1] == '(':
                tmp.pop()
            else:
                f = False
        elif top == ']':
            if not tmp:
                f = False
                break
            elif tmp[-1] == '[':
                tmp.pop()
            else:
                f = False
        if not tmp:
            f = True
        else:
            f = False

    return f

stack = list(input())
temp = stack.copy()

if isright(temp):
    print(func(stack))
else:
    print(0)