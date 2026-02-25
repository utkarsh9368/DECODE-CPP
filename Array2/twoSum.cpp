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
    int x;
    cin>>x;
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }

    return 0 ;
}

