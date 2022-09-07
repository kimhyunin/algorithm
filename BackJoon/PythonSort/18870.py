import sys
n = int(input())
x = list(map(int, sys.stdin.readline().split())) #원본

y = list(set(x))

y.sort()
dic = {y[i] : i for i in range(len(y))}
for i in x:
    print(dic[i], end=' ')



