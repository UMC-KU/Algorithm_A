import sys


A, B, C, M = list(map(int,sys.stdin.readline().rstrip().split()))

work = 0
tired = 0
now = 0

while now < 24:
    if tired + A <= M:
        work += B
        tired += A
    else:
        tired -= C
        if tired < 0:
            tired = 0
    now += 1

print(work)