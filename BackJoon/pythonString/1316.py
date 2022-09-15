n = int(input())
count = 0
for i in  range(n):
    result = []
    m = input()
    count += 1
    for i in range(0,len(m)):
        if m[i] not in result:
            result.append(m[i])
        else:
            if m[i-1] == m[i]:
                result.append(m[i])
            else:
                if(count > 0):
                    count -= 1
                break
print(count)


