n = int(input())
a = 0
count = 0
for i in range(n):
    a= 0
    count =0
    m = list(map(int, input().split()))
    for j in range(m[0]):
        k = m[j+1]
        a += k
    for u in range(m[0]):
        if(m[u+1] > a/m[0]):
            count += 1
    print(f'{(100 / m[0]) * count:.3f}%')