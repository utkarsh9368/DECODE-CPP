#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> vec(3);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    vec.push_back(10);
    cout << vec[3] << endl;
    vec[2] = 45;
    cout<<vec[2]<<endl;


    vector<int> v(3,5);
    
    cout << v[0] << " ";  // 0 
    cout << v[1] << " ";  // 0
    cout << v[2] << " ";



    return 0;
}