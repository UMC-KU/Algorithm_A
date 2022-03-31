from math import gcd
import sys

N = int(sys.stdin.readline().rstrip())
A = list(map(int,sys.stdin.readline().rstrip().split()))
B = set(A)
X = int(sys.stdin.readline().rstrip())

sum = 0
cnt = 0

for item in B:
    if item != X:
        if gcd(item,X) == 1:
            sum += item
            cnt += 1

print(sum/cnt)