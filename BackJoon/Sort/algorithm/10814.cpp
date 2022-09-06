#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<pair<int,string>,int> a, pair<pair<int,string>,int> b){
    if(a.first.first == b.first.first){
        return a.second < b.second;
    }
    return a.first.first < b.first.first;
}
int main(){
    int n;
    int age;
    string name;
    vector<pair<pair<int,string>, int>> v1;
    cin >> n;
    for(int i =0; i< n;i++){
        cin >> age >> name;
        v1.push_back(pair<pair<int,string>,int>(pair<int,string>(age,name), i));
    }
    sort(v1.begin(), v1.end(), compare);
    for(int i =0;i<v1.size();i++){
        cout << v1[i].first.first << ' ' << v1[i].first.second << '\n';
    }
    return 0;
}