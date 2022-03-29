from math import gcd
import sys

n = int(input())
answer = []

for i in range (0, n):
    a,b = list(map(int,sys.stdin.readline().rstrip().split()))
    answer.append(a * b / gcd(a,b))

for i in range (0, n):
    print(answer[i])