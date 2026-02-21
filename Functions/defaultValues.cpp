#include <bits/stdc++.h>
using namespace std;

void func(int x = 28 ,int y = 92) {
     // Default values of x and y
     // We must provide default values for all parameters, not just one or two.
     cout<<x<<" "<<y<<endl;
}
int main(){
    int x = 8;
    int y = 2;
    func();
    func(x,y);  
    func(x);

    return 0 ;
   
}

// 28 92
// 8 2
// 8 92