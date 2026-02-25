#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* ptr = arr;
    cout << ptr << endl;

    int* ptr1 = arr;        // arr gives base address of array ✔
    int* ptr2 = &arr[0];    // address of first element ✔

    // int* p4 = &arr;      // &arr is address of whole array ✘
    // int* p5 = arr[0];    // arr[0] is an int value, not address ✘
    // int* p6 = n;         // n is an int value, not address ✘

    cout << ptr1 << endl;
    cout << ptr2 << endl;

    cout << ptr[1] << endl;

    for (int i = 0; i < size; i++) {
        cout << ptr[i] << " ";
    }

    ptr[0] = 8;
    cout << endl;

    for (int i = 0; i < size; i++) {
        cout << ptr[i] << " ";
    }

    *ptr = 1;
    cout << endl;

    for (int i = 0; i < size; i++) {
        cout << ptr[i] << " ";
    }

    ptr++;
    *ptr = 0;
    ptr--;

    cout << endl;

    for (int i = 0; i < size; i++) {
        cout << ptr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < size; i++) {
        cout << *ptr << " ";
        ptr++;
    }
    ptr = arr;
    ptr++;
    *ptr = 9;
    ptr--;

    cout << endl;

    for (int i = 0; i < size; i++) {
        cout << ptr[i] << " ";
    }
        cout << endl;

    for (int i = 0; i < size; i++) {
        cout << i[ptr] << " ";
    }
        cout << endl;

    for (int i = 0; i < size; i++) {
        cout << i[arr] << " ";
    }



    return 0;
}