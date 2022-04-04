import sys

n = int(sys.stdin.readline().rstrip())

str = sys.stdin.readline().rstrip()

sum = 0

for i in range(0,n):
    temp = int(str[i])
    sum += temp

print(sum)
