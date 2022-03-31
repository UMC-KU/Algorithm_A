import sys

A, B = sys.stdin.readline().rstrip().split()
x, a, b = 0, 0, 0 
count = 0 



for i in range(2, 37):
    try:
        tempA = int(A, i)
    except:
        continue
    
    for j in range(2, 37):
        try:
            tempB = int(B, j)
            if tempA == tempB:
                count += 1
                x = tempA
                a = i
                b = j
        except:
            continue

if count == 1:
    print(x,a,b)
elif count == 0:
    print("Impossible")
else:
    print("Multiple")