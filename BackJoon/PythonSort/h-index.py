from calendar import day_abbr


# data = [3,0,6,1,5]
# data.sort()
# print(data)
# for i in range(0,len(data)):
#     if int(data[i]) == len(data):
#         print(data[i-1])

def solution(citations):
    citations.sort()
    for i in range(0, len(citations)):
        if citations[i] >= len(citations)-i:
            return len(citations) - i
    return 0

solution([4,2,5,2])