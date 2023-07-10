result=[list(map(str, input())) for _ in range(5)]
res = ""
for i in range(len(result)):
    for j in range(len(result[0])):
        res += result[j][i]

print(res)


4.524