from itertools import combinations
n,m = map(int, input().split())
num = list(map(int, input().split()))
arr = list(map(sum,combinations(num,3)))
arr.sort()
for i in range(len(arr)):
    if m < arr[i]:
        del arr[i::]
        break
print(arr[len(arr) - 1])
