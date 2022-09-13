a = []
for i in range(0,9):
    n = int(input())
    a.append(n)

print(max(a))
print(a.index(max(a))+1)