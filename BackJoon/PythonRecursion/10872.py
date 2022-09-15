# 팩토리얼
def Factorial(x):
    if x == 0:
        return 1
    return x * Factorial(x-1)
n = int(input())
print(Factorial(n))