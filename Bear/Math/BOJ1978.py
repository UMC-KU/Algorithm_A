import sys

def isPrime(a):
    if a == 1:
        return False
    if a == 2 or a == 3:
        return True

    for i in range(2,int(a**0.5)+1):
        if a % i == 0:
            return False
    return True    


N = int(sys.stdin.readline().rstrip())
list = list(map(int,sys.stdin.readline().rstrip().split()))
cnt = 0

for item in list:
    if isPrime(item):
        cnt += 1
    
print(cnt)