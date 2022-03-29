from math import gcd
import sys


a,b = list(map(int,sys.stdin.readline().rstrip().split()))

min = gcd(a,b)
max = int(a * b /min)

print(min)
print(max)