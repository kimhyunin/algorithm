#include <iostream>
using namespace std;

int main() {
 
    /*double a, b;
    cin >> a >> b ;
    cout.precision(12);
    cout.fixed;
    cout << a / b << endl;*/
    int a, b;
    cin >> a;
    cin >> b;
    int c = a * b;
    for (int i = 0; i < 3; i++) {        
        cout << a * (b % 10) << endl;;
        b = b / 10;
    }
}