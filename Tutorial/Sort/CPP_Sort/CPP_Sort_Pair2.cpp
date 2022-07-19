#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(pair<string, pair<int,int>> a, pair<string, pair<int,int>> b){
    if(a.second.first == b.second.first){
        return a.second.second > b.second.second;
    } else {
        return a.second.first > b.second.first;
    }
}

int main(void){
    vector<pair<string, pair<int, int>>> v;
    v.push_back(pair<string, pair<int, int>>("jack",pair<int,int>(90,19961212)));
    v.push_back(pair<string, pair<int,int>>("hadi",pair<int,int>(45,19951018)));
    v.push_back(pair<string, pair<int,int>>("miller",pair<int,int>(45,19951118)));
    v.push_back(pair<string, pair<int,int>>("jror",pair<int,int>(63,19971018)));
    v.push_back(pair<string, pair<int,int>>("eodk",pair<int,int>(90,19931018)));


    sort(v.begin(),v.end(), compare);
    for(int i =0; i < v.size();i++){
        cout << v[i].first << ' ';
    }
    return 0;
}