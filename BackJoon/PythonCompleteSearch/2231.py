n = int(input())
a = []
for i in range(n):
    a.append(list(map(int, input().split())))
count = 1
for i in a:
    count = 1
    for j in a:
        if i[0] < j[0] and i[1] < j[1]:
            count += 1
    print(count)

