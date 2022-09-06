// 프로그래머스 K번째 수
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int start;
    int end;
    int index;
    for(int i=0;i<commands.size(); i++){
        start = commands[i][0];
        end = commands[i][1];
        index = commands[i][2];
        vector<int> v  = vector<int>(array.begin() + start - 1, array.begin() + end );
        sort(v.begin(), v.end());
        answer.push_back(v[index-1]);
    }
    return answer;
}
int main(void){
    vector<int> array = {1,5,2,6,3,7,4};
    vector<vector<int>> command = {{2,5,3},{4,4,1},{1,7,3}};
    solution(array, command);
    return 0;
}