N = int(input())

num = N
count = 0

while True:
   
    ten = N % 10
    one = ((N // 10) + (N % 10)) % 10
    N = ten * 10 + one

    count += 1
    if N == num:
        break

print(count)
    
