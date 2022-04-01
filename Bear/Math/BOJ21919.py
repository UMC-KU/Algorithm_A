import sys


def isPrime(num):

    if num == 0 or num == 1:
        return False

    for i in range(2,int(num**0.5) + 1):
        if num % i == 0:
            return False

    return True 

n = int(sys.stdin.readline().rstrip())

A = set(list(map(int,sys.stdin.readline().rstrip().split())))
temp = []

for i in A:
    if isPrime(i):
        temp.append(i)

answer = 1

for num in temp:
    answer *= num

if answer == 1:
    answer = -1

print(answer)