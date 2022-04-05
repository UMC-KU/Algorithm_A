import sys

n = int(input())
seq = []
for _ in range(n):
    seq.append(int(sys.stdin.readline()))

stk = []
result = []
print_sign = []
id = 0
for i in range(1, n + 1):
    if i <= seq[id]:
        stk.append(i)
        print_sign.append('+')
    if i == seq[id]:
        while stk[-1] == seq[id]:
            result.append(stk.pop())
            print_sign.append('-')
            id += 1
            if not stk:
                break

if result == seq:
    for i in print_sign:
        print(i)
else:
    print('NO')