#include <bits/stdc++.h>
using namespace std;

void triangle(int n) {
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout<<"*"<<" ";
         }
            cout<<endl;
    }
}
int main() {
    for(int i = 1 ; i <=10 ; i++){
        cout<<"Trinagle : "<< i <<endl;
        triangle(i);
    }
    
    return 0 ;
}