#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target value: ";
    cin >> target;
    int index = -1;
    bool found = false;

    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            found = true;
            index = i;
            break;
        }
    }

    if(found)
        cout << "Target Found at index "<<index ;
    else
        cout << "Target Not Found";

    return 0;
}