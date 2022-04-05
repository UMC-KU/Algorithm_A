import sys


while True:
    s, t = list(sys.stdin.readline().rstrip().split())
    idx = 0

    if s == "" and t == "":
        break

    str_check = False
    for i in range(0,len(s)):

        check = False

        for j in range(idx,len(t)):
            if s[i] == t[j]:
                idx = j+1
                check = True
                break
        if check :
            str_check = True
        else :
            str_check = False
            break
    
    if str_check:
        print("Yes")
    else: 
        print("No")
