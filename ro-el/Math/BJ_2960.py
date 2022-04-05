# 에라토스테네스의 체

n, k = map(int, input().split())
li = [True]*(n+1)

cnt = 0
for i in range(2, n+1):
    for j in range(i, n+1, i):
        if li[j] == True:
            li[j] = False
            cnt += 1
            if cnt == k:
                print(j)
                break
