#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compair(string a, string b){
    if(a.length() == b.length()){
        return a<b;
    }
    return a.length() < b.length();
}
int main(void){
    int n;
    vector<string> v;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end(),compair);
    v.erase(unique(v.begin(), v.end()),v.end());

    for(int i = 0; i<v.size();i++){
        cout << v[i] << endl;
    }
    return 0;
}