import sys

n = int(sys.stdin.readline())
lst = []

for i in range(n):
    lst.append(sys.stdin.readline().strip())
set_lst = set(lst)
lst = list(set_lst)
lst.sort() ##알파벳순
lst.sort(key = len) ##길이 순

for i in lst:
    print(i)