#include <bits/stdc++.h>
using namespace std;
//void change(vector<int> &vec) --> we have to use this
void change(vector<int> vec){
    vec[0]= 100;
        for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
}
// vector are passed by value not reference as array
int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout<<endl;
    change(v);
    cout<<endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}