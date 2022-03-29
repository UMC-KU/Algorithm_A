import sys

N = int(sys.stdin.readline().rstrip())

X = N

for i in range(2, X + 1):
    if X == 1:
        break
    while X % i == 0:
        X //= i
        print(i)