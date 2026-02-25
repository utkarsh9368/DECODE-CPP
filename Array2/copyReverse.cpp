#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v1;
    int n;
    cin>>n;
    for(int i = 0; i < n ; i++ ){
        int num;
        cin>>num;
        v1.push_back(num);
    }
    
    
    //  vector<int>v2;
    //  for(int i = v1.size()-1 ; i >= 0 ; i--){
    //     v2.push_back(v1[i]);
    // }

        vector<int>v2(v1.size());
      for(int i = 0; i < v1.size(); i++){
        int j = v1.size() - i - 1;
        v2[i] = v1[j];
    }

      for(int i = 0; i < v2.size() ; i++ ){
        cout<<v2[i]<<" ";
    }
    
    return 0 ;
}


