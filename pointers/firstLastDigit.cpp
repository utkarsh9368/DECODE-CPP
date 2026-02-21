#include <bits/stdc++.h>
using namespace std;

void find(int n , int* ptr1 , int* ptr2) {

    *ptr2 = n%10;
    while(n>9){
        n = n/10;
    }
    *ptr1 = n;
    return;
}

int main() {
int n;
cin>>n;
int firstd,lastd;
int* ptr1 = &firstd;
int* ptr2 = &lastd;
find(n,ptr1,ptr2);
    cout << "First digit: " << firstd << endl;
    cout << "Last digit: " << lastd << endl;
      return 0;
}
  
