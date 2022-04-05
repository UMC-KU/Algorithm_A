n, k = input().split()
n = int(n)
k = int(k)

seq = [i for i in range(1, n + 1)]
answer = []
j = k - 1

for _ in range(n):
    tmp_len = len(seq)
    while j >= tmp_len:
        j -= tmp_len
    answer.append(seq[j])
    del seq[j]
    j += k - 1

print("<" + str(answer)[1:-1] + ">")