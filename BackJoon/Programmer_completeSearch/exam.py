

def solution(answers):
    a = [1,2,3,4,5]
    b = [2,1,2,3,2,4,2,5]
    c = [3,3,1,1,2,2,4,4,5,5]
    d,e,f = 0,0,0
    answer= []
    for i in range(len(answers)):
        if a[i%5] == answers[i]:
            d += 1
        if b[i%8] == answers[i]:
            e += 1
        if c[i%10] == answers[i]:
            f += 1
    m = max(d,e,f)
    if m == d:
        answer.append(1)
    if m == e:
        answer.append(2)
    if m == f:
        answer.append(3)
    return answer
solution([1,2,3,4,5])

solution([1,3,2,4,2])
