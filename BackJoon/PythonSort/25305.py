n = list(map(int, input().split()))
x = list(map(int, input().split()))
x.sort(reverse=True)
print(x[n[1]-1])