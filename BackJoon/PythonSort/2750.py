n = int(input())
x = []
for i in range(0,n):
    number = int(input())
    x.append(number)
for j in sorted(x):
    print(j)