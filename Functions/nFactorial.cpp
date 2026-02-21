#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << fact(i) << endl;
    }

    return 0;
}

//ANOTHER WAYY...............................................
// #include<bits/stdc++.h>
// using namespace std;

// void nfact(int n){
//     int fact = 1;
//     for(int i = 1; i <= n; i++){
//         fact = fact * i;
//         cout << fact << endl;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter a Number : ";
//     cin>>n;
//     nfact(n);
//     return 0;
// }