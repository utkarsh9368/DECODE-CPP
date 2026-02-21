#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 9;
    int *ptr = &x;
    int **p = &ptr;

    cout<<x<<endl;
     cout<<*ptr<<endl;
      cout<<**p<<endl;

    cout<<&x<<endl;
     cout<<ptr<<endl;
      cout<<*p<<endl;

    cout<<p<<endl;
   
   //as it is we can make triple pointer

      return 0;
}
  
