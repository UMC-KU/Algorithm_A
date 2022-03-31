import sys

def isPrime(num):

    if num == 0 or num == 1:
        return False

    for i in range(2,int(num**0.5) + 1):
        if num % i == 0:
            return False

    return True 

n = int(sys.stdin.readline().rstrip())
answer = []

for i in range(0,n):
    a = int(sys.stdin.readline().rstrip())
    while 1:
        if isPrime(a):
            answer.append(a)
            break
        else:
            a += 1
for i in range(0,n):
    print(answer[i])