#include<bits/stdc++.h>
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
    int mx = arr[0], smx = arr[0];
    
    for(int i = 1; i < n; i++) {
        if(arr[i] > mx) {
            mx = arr[i];
        }
    }
        for(int i = 1; i < n; i++) {
        if(arr[i] > smx && arr[i]!=mx){
        smx = arr[i];
        }
    }
    cout << "Maximum Value : " << mx << endl;
    cout << "Second Maximum Value : " << smx << endl;

    return 0;
}

