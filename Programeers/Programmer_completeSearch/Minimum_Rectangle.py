def solution(sizes):
    for i in range(len(sizes)):
        a = sizes[i][0]
        b = sizes[i][1]
        if a < b:
            sizes[i][0], sizes[i][1] = b , a
    print(max(x) for x in sizes)
    for i in sizes:
        print(min(i))
    return max(sizes,key=lambda x: x[0])[0] * max(sizes,key=lambda x: x[1])[1]


solution([[60,50], [30,70], [60,30], [80,40]])