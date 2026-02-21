#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 5 , y = 9;
    // int* p1 = &x;
    // int* p2 = &y;

    // int* p1 = &x , p2 = &y; ERROR

       int* p1 = &x , p2 = y;
       int* p1,p2;
       //both are same

cout<<*p1<<" "<<p2;

    return 0;
}