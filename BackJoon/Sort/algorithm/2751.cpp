#include <iostream>
#include <algorithm>
#include <random>

using namespace std;
int main(void){
    int arr[10000001];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout << arr[i] << '\n';
    }
}
