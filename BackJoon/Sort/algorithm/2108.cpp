#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int arr[5000001];
int N;

int avr(){
    double totalNumber = 0;
    for(int i =0;i<N;i++){
        totalNumber += arr[i];
    }
    return round(totalNumber / N);
}
int middle(){
    return arr[(N-1)/2];
}
int mode(){
    int cnt = 0;
    int ans = 0;
    int temp = arr[0];
    int result = arr[0];
    bool second = false;
    for (int i = 0; i < N;i++){
        if (temp == arr[i]){
            cnt++;
        }
        else{
            if(ans < cnt){
                ans = cnt;
                result = arr[i - 1];
                second = false;
            }
            else if(ans == cnt && !second){
                result = arr[i - 1];
                second = true;
            }
            cnt = 1;
            temp = arr[i];
        }
    }
    if(ans < cnt){
        result = arr[N - 1];
    }
    else if(ans == cnt && !second){
        result = arr[N - 1];
    }
    return result;
}
int Range(){
    return arr[N-1] - arr[0];
}

int main(void){
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    sort(arr, arr+N);
    cout << avr() << '\n';
    cout << middle() << '\n';
    cout << mode() << '\n';
    cout << Range() << '\n';
    return 0;
}
