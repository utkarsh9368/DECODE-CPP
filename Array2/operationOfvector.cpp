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

    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }

    vec.pop_back();
    cout<<endl;

        for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << " ";
    }

    cout<<endl;
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    cout<<vec.at(4)<<endl;
    cout<<vec[4]<<endl;
    sort(vec.begin(),vec.end());
        cout<<endl;

        for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << " ";
    }
    sort(vec.begin(),vec.end(),greater<int>());
        cout<<endl;

        for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << " ";
    }
    reverse(vec.begin(),vec.end());
        cout<<endl;

        for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << " ";
    }

    return 0;
}