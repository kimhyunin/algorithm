#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    vector<pair<int, string>> v;
    v.push_back(pair<int, string>(90,"jack"));
    v.push_back(pair<int, string>(85,"Tom"));
    v.push_back(pair<int, string>(45,"hani"));
    v.push_back(pair<int, string>(67,"alice"));
    v.push_back(pair<int, string>(90,"pica"));
    sort(v.begin(),v.end());
    for(int i =0; i < v.size();i++){
        cout << v[i].second << ' ';
    }
    return 0;
}