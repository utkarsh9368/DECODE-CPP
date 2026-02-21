#include<bits/stdc++.h>
using namespace std;
int fact(int x){
    int fact = 1 ;
    for(int i = 1 ; i<=x ; i++){
        fact = fact*i;
    }
    return fact;
}
int permutation(int n , int r){
    return fact(n)/fact(n-r);
}
int combination(int n , int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
int n , r ;
cout<<"Enter n :";
cin>>n;
cout<<"Enter r :";
cin>>r;

cout<<"nPr : "<<permutation(n,r)<<endl;
cout<<"nCr : "<<combination(n,r)<<endl;

return 0 ;
}