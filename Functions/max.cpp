#include<bits/stdc++.h>
using namespace std;

int maxthree(int a, int b, int c){
    if(a > b && a > c){
        return a;
    }
    else if(b > a && b > c){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int a, b, c;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter third number: ";
    cin >> c;

    cout << "Maximum number is: " << maxthree(a,b,c);

    return 0;
}