#include <bits/stdc++.h>
using namespace std;
int gcd(int x ,int y){
    int hcf = 1;
//BASIC CODE...
    // for(int i = 1 ; i <= min(x,y); i++){
    //     if(x%i==0 && y%i==0){
    //        hcf = i;
    //     }
    //  }
//OPTIMIZED CODE...
        for(int i = min(x,y) ; i>=1; i--){
        if(x%i==0 && y%i==0){
            hcf = i;
            break;
         }
      }    

    return hcf;
}
int main(){
int a, b;
cout << "Enter two numbers: ";
cin >> a >> b;
cout<<gcd(a,b); 
}