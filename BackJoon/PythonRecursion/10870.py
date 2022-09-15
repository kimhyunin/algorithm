# 피보나치 수 5
def num(n):
    if n <= 1:
        return n
    return num(n-1) + num(n-2)
print(num(10))
