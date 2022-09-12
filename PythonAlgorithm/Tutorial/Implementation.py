#상하좌우
# n = int(input())
# a = input().split()
# m = [[0 for col in range(n)] for row in range(n)]
# # R U L D
# dx = [0,-1,0,1]
# dy = [1,0,-1,0]

# x,y = 0,0
# for i in range(0,len(a)):
#     if a[i] == 'R':
#         nx = x + dx[0]
#         ny = y + dy[0]
#     elif a[i] == 'L':
#         nx = x + dx[2]
#         ny = y + dy[2]
#     elif a[i] == 'U':
#         nx = x + dx[1]
#         ny = y + dy[1]
#     elif a[i] == 'D':
#         nx = x + dx[3]
#         ny = y + dy[3]
    
#     if(nx<0 or ny<0 or nx>n or ny>n):
#         continue

#     x, y = nx, ny

# # print(start)
# print(x+1,y+1)


#시각
# n = int(input())
# sec, min, hour = 0,0,0
# count = 0
# for i in range(0,n+1):
#     for j in range(0,60):
#         for k in range(0,60):a
#             if '3' in str(i) or '3' in str(j) or '3' in str(k):
#                 count += 1
# print(count)

#왕실의 나이트
# n = input()
# colum = int(n[1])
# row = int(ord(n[0])) - int(ord('a')) + 1

# move = [(-2,-1),(-2,1),(2,1),(2,-1),(1,-2),(1,2),(-1,-2),(-1,2)]
# count = 0

# for moved in move:
#     dx = row + moved[0]
#     dy = colum + moved[1]
#     if dx < 1 or dy < 1:
#         continue``
#     count += 1
# print(count)K1KA5CB7 


#문자열 재정렬
a = input()
num = 0
res = []
for i in a:
    if not i.isalpha():
        num+=int(i)
    else:
        res.append(i)
res.sort()
print(''.join(map(str,res))+str(num))


