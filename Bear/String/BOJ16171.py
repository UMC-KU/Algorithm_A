import sys

str = sys.stdin.readline().rstrip()
want = sys.stdin.readline().rstrip()

answer = ""

for i in range(0,len(str)):
    if not str[i].isdigit():
        answer += str[i]

if answer.find(want) == -1:
    print(0)
else :
    print(1)