#include <bits/stdc++.h>
using namespace std;

void func(int x ,int y) {
    cout<<"address of func x : " << &x <<endl;
    cout<<"address of func y : " << &y <<endl;  
}
int main(){
    int x = 8;
    int y = 9;
    cout<<"address of main x : " << &x <<endl;
    cout<<"address of main y : " << &y <<endl;

    func(x,y);

    return 0 ;
   
}

// address of main x : 0x61ff0c
// address of main y : 0x61ff08
// address of func x : 0x61fef0
// address of func y : 0x61fef4