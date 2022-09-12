#dictionary

data = dict()
data["사과"] = "Apple"
data["바나나"] = "Banana"
print(data)
if '사과' in data:
    print("사과를 키로 가지는 데이터가 존재합니다.")
# 키 데이터만 담은 리스트
print(data.keys())
print(data.values())
print(list(data.values()))
for i in data.values():
    print(i)

#set()
setData = set([1,2,3])
print(setData)

setData.add(4)
print(setData)

setData.update([4,5])
print(setData)

setData.remove(3)
print(setData)

from itertools import permutations # 순열 = 중복허용x
from itertools import combinations # 조합 = 중복허용x
from itertools import product # 중복순열 = 중복허용
from itertools import combinations_with_replacement #중복조합= 중복허용


data = [6,0,1,4]
res = list(permutations(data, 4))
resCombination = list(combinations(data,4))
resProduct = list(product(data, repeat=4))
resCombiRe = list(combinations_with_replacement(data,4))
print(res)
print(resCombination)
print(len(resProduct))
print("rescombi",resCombiRe)

import math
# 최소 공배수(LCM)를 구하는 함수
def lcm(a,b):
    return a*b // math.gcd(a,b)
a=21
b=14

print(math.gcd(21,14)) #최대 공약수
print(lcm(21,14)) #최소공배수


