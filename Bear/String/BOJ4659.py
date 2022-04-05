vows = "aeiou" 

answer= []

while True: 
    s = input() 
    if s == "end": 
        break 
    v = 0 
    k = 1 
    for i in range(0,len(s)): 
        if s[i] in vows: 
            v = 1 
        
        if i > 0: 
            if s[i] == s[i-1] and s[i] != 'e' and s[i] != 'o': 
                k = 0 
                break 
        
        if i > 1: 
            if s[i] not in vows: 
                if s[i-1] not in vows:
                         if s[i-2] not in vows: 
                            k = 0 
                            break 
                            
                if s[i] in vows: 
                    if s[i-1] in vows: 
                        if s[i-2] in vows: 
                            k = 0 
                            break 
    if v == 1 and k == 1: 
        answer.append("<" + s + "> is acceptable.")
                
    else: 
        answer.append("<" + s + "> is not acceptable.")

for i in range(0,len(answer)):
    print(answer[i])

