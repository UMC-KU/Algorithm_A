import sys
import heapq

n = int(input())
h = []

for _ in range(n):
    for num in list(map(int, sys.stdin.readline().split())):
        if len(h) < n:
            heapq.heappush(h, num)
        else:
            if h[0] < num:
                heapq.heappop(h)
                heapq.heappush(h, num)

print(heapq.heappop(h))