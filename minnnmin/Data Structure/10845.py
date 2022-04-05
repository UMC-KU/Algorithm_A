import sys

n = int(input())
queue = []
for _ in range(n):
    command = sys.stdin.readline().rstrip()
    if command == 'pop':
        if not queue:
            print(-1)
        else:
            print(queue[0])
            del queue[0]
    elif command == 'size':
        print(len(queue))
    elif command == 'empty':
        if not queue:
            print(1)
        else:
            print(0)
    elif command == 'front':
        if not queue:
            print(-1)
        else:
            print(queue[0])
    elif command == 'back':
        if not queue:
            print(-1)
        else:
            print(queue[-1])
    else:  # push
        com, x = command.split()
        x = int(x)
        queue.append(x)