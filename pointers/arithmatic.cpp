#include <bits/stdc++.h>
using namespace std;

int main() {
    int x =10;
    int* ptr = &x;
    cout<<"for int(4 byte) : \n";
    cout<<ptr<<endl; //0x61ff08
    cout<<*ptr<<endl; //10

    ptr++; //increase 4 byte in hexadeciamal
 
    cout<<ptr<<endl; //0x61ff0c
    cout<<*ptr<<endl<<endl; //6422356

    bool b = true;
    bool* bptr = &b;
    cout << "for bool (1 byte) : \n";
    cout << bptr << endl; //0x61ff03 
    cout << *bptr << endl; //1 

    bptr++;  // increase 1 byte in hexadecimal

    cout << bptr << endl; //0x61ff04 
    cout << *bptr << endl<<endl; //10  


    int z = 10;
    int* p = &z;
    cout<<p<<endl; 
    cout<<*p<<endl;
    //*p++ : wrong
    // *p = *p + 1 ; 
    (*p)++;

    cout<<*p<<endl; 
    

    return 0;
}