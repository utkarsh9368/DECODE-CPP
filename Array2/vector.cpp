#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> vec;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        vec.push_back(num);
    }

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }

    

    return 0;
}