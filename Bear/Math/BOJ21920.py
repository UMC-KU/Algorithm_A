from math import gcd
import sys

N = int(sys.stdin.readline().rstrip())
A = list(map(int,sys.stdin.readline().rstrip().split()))
X = int(sys.stdin.readline().rstrip())

sum = 0
cnt = 0

for item in A:
    
    if gcd(item,X) == 1:
        sum += item
        cnt += 1

print(sum/cnt)