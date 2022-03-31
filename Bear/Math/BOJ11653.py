import sys

N = int(sys.stdin.readline().rstrip())

X = N

#X를 넣은것보다 N을 넣은게 더 빠르다..?
for i in range(2, X + 1):
    if X == 1:
        break
    while X % i == 0:
        X //= i
        print(i)