# # 체스판 다시 칠하기
# from typing import Counter


n,m = map(int, input().split())
res = []
for i in range(n):
    res.append(list(map(str, input())))

c = []

answer = []
for i in range(n-7): # 8
    for j in range(m-7): # 8
        start = res[i][j]
        print(start)
        for k in range(i,i+8):
            count = 0
            if k > 0 and start == 'W':
                start = 'B'
            elif k>0 and start == 'B':
                start = 'W'
            for o in range(j,j+8):
                if start == 'W':
                    if (k+o)%2 == 0:
                        if res[k][o] != 'W':
                            count += 1
                    else:
                        if res[k][o] != 'B':
                            count +=1
                else:
                    if (k+o)%2 == 0:
                        if res[k][o] != 'B':
                            count += 1
                    else:
                        if res[k][o] != 'W':
                            count +=1
            c.append(count)
        answer.append(sum(c))
        c.clear()

print(len(answer))
print(answer)
print(min(answer))


# N, M = map(int, input().split())
# original = []
# count = []

# for _ in range(N):
#     original.append(input())

# for a in range(N-7):
#     for b in range(M-7):
#         index1 = 0
#         index2 = 0
#         for i in range(a, a+8):
#             for j in range(b, b+8):
#                 if (i+j) % 2 == 0:
#                     if original[i][j] != 'W':
#                         index1 += 1
#                     if original[i][j] != 'B':
#                         index2 += 1
#                 else:
#                     if original[i][j] != 'B':
#                         index1 += 1
#                     if original[i][j] != 'W':
#                         index2 += 1
#         count.append(min(index1, index2))
#         print(count)

# print(min(count))