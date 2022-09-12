from itertools import permutations
import math

def isPrimeNumber(x):
    if x < 2:
        return False
    for i in range(2,int(x**0.5)+1):
        if x % i == 0:
            return False
    return True
def solution(numbers):
    num = []
    answer = []
    data = list(numbers)
    for i in range(1,len(numbers)+1):
        num += list(set(map(''.join,permutations(data,i))))
    print(num)
    num = list(set(map(int, num)))
    print(num)
    for i in num:
        if isPrimeNumber(i):
            answer.append(i)
    return len(set(answer))


solution("17")
solution("1231")