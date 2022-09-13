n,m = map(int, input().split())
m = m - 45
if(m < 0):
    m = m + 60
    n = n - 1
    if(n < 0):
        n = n + 24
print(n,m)