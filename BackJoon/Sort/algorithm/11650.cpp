#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int n;
    int x;
    int y;
    vector<pair<int, int>> v; // <- 2차원 백터 선언
    cin >> n;
    for(int i =0; i<n;i++){
        cin >> x >> y;
        v.push_back({x,y}); // <- 2차원 백터 값 넣기
    }
    sort(v.begin(), v.end()); // 정렬 
    for(int i = 0; i< n; i++){
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
}
// sort STL을 사용하면 알아서 첫번째 기준으로 정렬하고, 동일하면 두번째 기준으로 정렬 됨!