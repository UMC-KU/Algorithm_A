from math import gcd
import sys

n = int(sys.stdin.readline())
list = list(map(int,sys.stdin.readline().rstrip().split()))

max = gcd(list[0],gcd(list[1],list[-1])) #-1은 마지막 인덱스

for i in range(1, max // 2 + 1):                      
    if max % i == 0:                                  
        print(i)
print(max)   



