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

    // int first = 0, last = n-1;
    // for(int i = 0 ; i < n/2 ; i++){
    //     int temp = v[first];
    //     v[first] = v[last];
    //     v[last] = temp;
    //     first++;
    //     last--;
    // }

    // int first = 0, last = n-1;
    // while(first<last){
    //     int temp = v[first];
    //     v[first] = v[last];
    //     v[last] = temp;
    //     first++;
    //     last--;
    // }

 ////------>>>take first = i and last = j  for cleaniness

    for(int  i = 0 , j = n-1 ; i<=j ;i++ ,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }

        for(int i = 0 ; i < n ; i++){
        cout<<v[i]<<" ";
   
    }
    
    return 0 ;
}

