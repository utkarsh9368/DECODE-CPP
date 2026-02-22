#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;

    int arr[n];

    cout << "Enter Array Elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array Elements: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    cin >> arr[4];   // Direct input at index 4

    cout << "Array Elements: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}