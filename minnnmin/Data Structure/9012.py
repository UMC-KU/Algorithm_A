import sys

def is_vps(list):
    stack = []
    for p in list:
        if not stack:
            stack.append(p)
        else:
            if stack[-1] == '(':
                if p == ')':
                    stack.pop()
                else:
                    stack.append(p)
            else:
                stack.append(p)
    if stack:
        print('NO')
    else:
        print('YES')

n = int(input())
for _ in range(n):
    ps = list(sys.stdin.readline().rstrip())
    is_vps(ps)