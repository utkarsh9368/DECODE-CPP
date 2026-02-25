#include<bits/stdc++.h>
using namespace std;
void show(vector<int>& v){
    for(int i = 0 ; i < v.size() ; i++){
        cout<<v[i]<<" ";
    }
}
void rev(int i , int j ,vector<int>& v){
    while(i<j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i = 0; i < n ; i++ ){
        int num;
        cin>>num;
        v.push_back(num);
    }

    rev(0,3,v);
    show(v);
    
    return 0 ;
}

