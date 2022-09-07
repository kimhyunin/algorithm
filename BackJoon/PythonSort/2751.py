import readline
import sys
n = int(input())
x = []
for i in range(0, n):
    x.append(int(sys.stdin.readline()))
x.sort()
for i in x:
    print(i)
