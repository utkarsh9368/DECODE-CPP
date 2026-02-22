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
    //int mx = INT_MIN, mn = INT_MAX;
    int mx = arr[0], mn = arr[0];
    
    for(int i = 1; i < n; i++) {
        if(arr[i] > mx) {
            mx = arr[i];
        }
        if(arr[i] < mn) {
            mn = arr[i];
        }
    }

    cout << "Maximum Value : " << mx << endl;
    cout << "Minimum Value : " << mn << endl;

    return 0;
}


// //USING FUNTION.........................

// #include <bits/stdc++.h>
// using namespace std;

// int findMax(int arr[], int n) {
//     int mx = arr[0];
//     for(int i = 1; i < n; i++) {
//         if(arr[i] > mx) {
//             mx = arr[i];
//         }
//     }
//     return mx;
// }

// int findMin(int arr[], int n) {
//     int mn = arr[0];
//     for(int i = 1; i < n; i++) {
//         if(arr[i] < mn) {
//             mn = arr[i];
//         }
//     }
//     return mn;
// }

// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter array elements: ";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int mx = findMax(arr, n);
//     int mn = findMin(arr, n);

//     cout << "Maximum Value : " << mx << endl;
//     cout << "Minimum Value : " << mn << endl;

//     return 0;
// }