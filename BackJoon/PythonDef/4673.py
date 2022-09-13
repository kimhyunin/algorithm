# Self Number
def selfNumber(x):
    result = list(range(1,10001))
    for i in range(1,x+1):
        if 1 <= i < 10:
            result.remove((i//1)+i)
        elif 10 <= i < 100:
            a = i + i//10 + i%10
            result.remove(a)
        elif 100 <= i < 1000:
            a = i
            b = i
            d = 1000
            while(1):
                b = b + (a // d)
                a = a % d
                d = d //10
                if(d == 0):
                    break
            if b in result:
                result.remove(b)
        elif 1000 <= i < 10001:
            a = i
            b = i
            d = 10000
            while(1):
                b = b + (a // d)
                a = a % d
                d = d //10
                if(d == 0):
                    break
            if b in result:
                result.remove(b)
    for i in result:
        print(i)
selfNumber(10000)
