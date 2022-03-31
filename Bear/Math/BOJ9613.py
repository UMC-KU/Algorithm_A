from math import gcd
import sys


n = int(sys.stdin.readline().rstrip())
answer= []

for i in range(0,n):
    sum = 0
    temp = list(map(int,sys.stdin.readline().rstrip().split()))

    for j in range(1,len(temp)-1):
        for k in range(j+1,len(temp)):
            sum += gcd(temp[j],temp[k])
    
    answer.append(sum)

for i in range(0,n):
    print(answer[i])