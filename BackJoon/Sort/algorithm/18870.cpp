#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    int number;
    vector<int> v;

    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> number;
        v.push_back(number);
    }
    vector<int> v1(v);

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()),v.end());

    for(int i = 0; i<v1.size();i++ ){
        cout << lower_bound(v.begin(), v.end(), v1[i]) - v.begin() << ' '; // find 대신 lower bound 
    }
    return 0;
}