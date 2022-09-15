#크로아티아 알파벳
alpha = ["c=", "c-","dz=","d-","lj","nj","s=","z="]
result = []
n = input()
i = 0

#1 
while i < len(n):
    if n[i:i+2] in alpha:
        result.append(n[i:i+2])
        i = i + 2
    elif n[i:i+3] in alpha:
        result.append(n[i:i+3])
        i = i + 3
    else:
        result.append(n[i])
        i = i + 1
print(len(result))

#2 
for i in alpha:
    n = n.replace(i,'*')
print(len(n))



