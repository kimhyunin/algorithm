from collections import Counter
import sys

def modes():
    modeNumber = Counter(x).most_common()
    if len(modeNumber) > 1:
        if modeNumber[0][1] == modeNumber[1][1]:
            print(modeNumber[1][0])
        else:
            print(modeNumber[0][0])
    else:
        print(modeNumber[0][0])


n = int(input())
x = []
total = 0
middle = 0
numberRange = 0
for i in range(0,n):
    number = int(sys.stdin.readline())
    x.append(number)
    total += number
x.sort()

total  = round(total / n)
middle = x[int(n/2)]

numberRange = x[n-1] - x[0]
print(total)
print(middle)
modes()
print(numberRange)



