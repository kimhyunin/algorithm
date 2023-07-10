score = {"A+": 4.5, "A0" : 4.0, "B+":3.5, "B0":3.0, "C+":2.5, "C0":2.0, "D+":1.5, "D0":1.0, "F":0.0}
realscore = 0
learnScore = 0
for i in range(20):
    _input = list(map(str, input().split()))
    if _input[2] != "P":
        realscore += float(_input[1]) * score[_input[2]]
        learnScore += float(_input[1])

print(realscore/learnScore)