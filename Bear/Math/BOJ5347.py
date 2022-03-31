from math import gcd
import sys

n = int(sys.stdin.readline().rstrip())

answer = []

for i in range(0,n):
    a,b = list(map(int,sys.stdin.readline().rstrip().split()))
    min = int(a * b / gcd(a,b))
    answer.append(min)


for i in range (0, n):
    print(answer[i])