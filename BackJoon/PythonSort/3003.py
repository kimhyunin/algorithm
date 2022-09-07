piece = [1,1,2,2,2,8]
x = list(map(int, input().split()))
for i in range(len(piece)):
    print(piece[i] - x[i], end = ' ')
