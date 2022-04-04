import sys

answer = []

while True:

    str = sys.stdin.readline().rstrip()

    if str == "END":
        break
    temp = list(str)

    temp.reverse()

    sum =""

    for word in temp:
        sum += word
    
    answer.append(sum)

for str in answer:

    print(str)