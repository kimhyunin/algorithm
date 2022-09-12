def solution(numbers):
    res = list(map(str, numbers))
    print(res)
    res.sort(key=lambda x:x*3, reverse= True)
    res = str(int(''.join(res)))
    
    return res

solution([6,10,2])
