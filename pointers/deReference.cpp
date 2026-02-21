#include <bits/stdc++.h>
using namespace std;

int main() {
    int x =10;
    int* p = &x;

    cout<<*p<<endl;
    cout<<x<<endl;

    *p = 7;
    cout<<x<<endl;
    
    return 0;
}