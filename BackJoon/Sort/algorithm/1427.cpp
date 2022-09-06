#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int number;
    vector<int> list;
    cin >> number;
    while(number){
        list.push_back(number%10);
        number /= 10;
    }
    sort(list.begin(), list.end(), greater<int>());
    for(int i = 0; i < list.size(); i++){
        cout << list[i];
    }
    return 0;
}