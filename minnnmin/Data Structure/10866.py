import sys
from collections import deque

n = int(input())
dq = deque()

for _ in range(n):
    command = sys.stdin.readline().rstrip()
    if command == 'pop_front':
        if not dq:
            print(-1)
        else:
            print(dq.popleft())
    elif command == 'pop_back':
        if not dq:
            print(-1)
        else:
            print(dq.pop())
    elif command == 'size':
        print(len(dq))
    elif command == 'empty':
        if not dq:
            print(1)
        else:
            print(0)
    elif command == 'front':
        if not dq:
            print(-1)
        else:
            print(dq[0])
    elif command == 'back':
        if not dq:
            print(-1)
        else:
            print(dq[-1])
    else: # push
        com, x = command.split()
        x = int(x)
        if com == 'push_front':
            dq.appendleft(x)
        else: # push_back
            dq.append(x)