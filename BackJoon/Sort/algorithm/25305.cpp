#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b){
    return a > b;
}
int main(){
    int arr[1001];
    int N;
    int K;
    int score;
    cin >> N;
    cin >> K;
    for(int i = 0; i< N; i++){
        cin >> score;
        arr[i] = score;
    }
    sort(arr, arr+N, compare);
    // for(int i =0;i< N;i++){
    //     cout << arr[i] ;
    //     cout << ' ';
    // }
    
    cout << arr[K-1];
}
