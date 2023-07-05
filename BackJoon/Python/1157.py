from collections import Counter
_input = list(map(str, input().upper()))
c = Counter(_input)
a = c.most_common(2)
if(len(a) > 1):
    if(a[0][1] - a[1][1] == 0):
        print("?")
    else:
        print(a[0][0].upper())
else:
    print(a[0][0].upper())
