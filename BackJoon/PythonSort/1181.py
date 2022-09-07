n = int(input())
x = []
for i in range(0,n):
    x.append(input())
a = set(x)
b = list(a)
b.sort()
b.sort(key= lambda b: len(b))

for i in b:
    print(i)