#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i = 0; i < n ; i++ ){
        int num;
        cin>>num;
        v.push_back(num);
    }
    int target ;
    cin>>target;
    for(int i = v.size()-1 ; i>=0 ; i--){
        if(v[i]==target){
            cout<<i;
             return 0;
        }
                 
    }
    cout<<"not found";
    return 0 ;
}



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v;
//     int n;
//     cin>>n;
//     for(int i = 0; i < n ; i++ ){
//         int num;
//         cin>>num;
//         v.push_back(num);
//     }
//     int index = -1;
//     int target ;
//     cin>>target;
//     for(int i = 0 ; i < n ; i++){
//         if(v[i]==target){
//             index = i;
//         }
//     }
// if(index!= -1)
//     cout<<index;
// else
//     cout<<"not found";
//     return 0 ;
// }