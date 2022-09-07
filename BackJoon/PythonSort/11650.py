import sys
n = int(input())
x = []
for i in range(0,n):
    x.append(list(map(int, sys.stdin.readline().split())))

x.sort(key=lambda x: (x[1], x[0]))

for j in range(0,n):
    print("{} {}".format(x[j][0], x[j][1]))