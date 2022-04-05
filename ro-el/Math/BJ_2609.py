# 최대공약수와 최소공배수

def GCD(a, b):
    if b == 0:
        return a
    return GCD(b, a % b)

a, b = map(int, input().split())

gcd = GCD(max(a, b), min(a, b))
print(gcd)
print(a*b//gcd)
