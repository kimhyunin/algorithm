import sys
n = int(input())
x = []
for i in range(0,n):
    age, name = map(str, sys.stdin.readline().split())
    age = int(age)
    x.append((age,name))


x.sort(key=lambda x:x[0])

for i in x:
    print(i[0], i[1])