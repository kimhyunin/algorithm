# 순열은 서로 다른 N개의 원소중 R개를 선택할 때 순서를 고려하여 선택한 경우의 수
# 조합은 서로 다른 N개의 원소중 R개를 선택할 때 순서를 고려하지 않고 선택한 경우의 수
from itertools import permutations # 순열 = 중복허용x
from itertools import combinations # 조합 = 중복허용x
from itertools import product # 중복순열 = 중복허용
from itertools import combinations_with_replacement #중복조합= 중복허용

data = [6,0,1,4]
res = list(permutations(data, 2))
resCombination = list(combinations(data,2))
resProduct = list(product(data, repeat=2))
resCombiRe = list(combinations_with_replacement(data,2))
print("permutations 순열:           "f"{res}")
print("combinations 조합:           "f"{resCombination}")
print("product      순열 중복 허용: "f"{resProduct}")
print("rescombi     조합 중복 허영: "f"{resCombiRe}")

####################################################################################
# 문자열로 씌어진 문자열 리스트를 하나로 만들기
array = ['1', '2', '3', '4']
array = ''.join(array)


####################################################################################
# 문자열 여러개

