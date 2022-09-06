#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compair(pair<int, int> a, pair<int,int> b){
    if(a.second < b.second){
        return true;
    }else if(a.second == b.second){
        if(a.first< b.first){
            return true;
        }
    }
    return false;
}
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
    sort(v.begin(), v.end(),compair); // 정렬
    for(int i = 0; i< n; i++){
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
}
