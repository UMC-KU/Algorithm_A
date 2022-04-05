import sys

n = int(input())

stack = []
for _ in range(n):
    command = sys.stdin.readline().rstrip()
    if command == 'pop':
        if stack:
            print(stack.pop())
        else:
            print(-1)
    elif command == 'size':
        print(len(stack))
    elif command == 'empty':
        if stack:
            print(0)
        else:
            print(1)
    elif command == 'top':
        if not stack:
            print(-1)
        else:
            print(stack[-1])
    else:  # push
        com, x = command.split()
        x = int(x)
        stack.append(x)