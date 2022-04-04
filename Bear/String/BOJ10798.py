import sys

answer = []

for i in range(0,5):
    answer.append(sys.stdin.readline().rstrip())

i = 0
sum = ""

while i < 15:
    for str in answer:
        try:
            sum += str[i]
        except:
            continue

    i += 1

print(sum)