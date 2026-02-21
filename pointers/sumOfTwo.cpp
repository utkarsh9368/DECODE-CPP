#include <bits/stdc++.h>
using namespace std;

int main() {
    // int x =10;
    // int y =20;
    // int* p1 = &x;
    // int* p2 = &y;

    int x , y ;
    int* p1 = &x;
    int* p2 = &y;
    cout<<"Enter Two Numbers : ";
    cin>>*p1>>*p2;

    cout<<"sum of "<<*p1 <<" and "<<*p2 <<" : "
    <<*p1+*p2 <<endl;
    cout<<"sum of "<<*p1 <<" and "<<*p2 <<" : "
    << x + y <<endl;
    return 0;
}