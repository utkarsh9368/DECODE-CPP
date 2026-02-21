#include<bits/stdc++.h>
using namespace std;

int main(){
    int a , b ;
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;
    int temp;
    temp = a;
    a = b;
    b = temp;

    // a = a + b;
    // b = a - b;
    // a = a - b;

    cout << "After swap: " << a << " " << b;

    return 0;
}