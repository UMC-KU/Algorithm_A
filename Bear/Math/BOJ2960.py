
import sys

N, K = list(map(int,sys.stdin.readline().rstrip().split()))

integer = [i for i in range(0,N+1)]

idx = 2
cnt = 0

while True:

    temp = idx

    while temp <= N :

        if integer[temp] != 0:
            integer[temp] = 0
            cnt += 1
        
        if(cnt == K):
            print(temp)
            exit()
        
        temp += idx

    idx += 1