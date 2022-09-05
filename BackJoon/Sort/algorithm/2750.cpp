#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b){
    return a < b;
}
int main(void){
    int index;
    cin >> index;
    int a[index] = {};
    for(int i = 0;i < index ; i++){
        int number;
        cin >> number;
        a[i] = number;
    }
    // int a[10] = {9,3,4,5,10,7,6,2,1,8};
    int aSize = sizeof(a)/sizeof(int);
    sort(a,a+aSize, compare);
    for(int i=0;i<aSize;i++){
        cout << a[i] << endl;
    }
    return 0;
}