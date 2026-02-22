#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int marks[n];

    cout << "Enter marks: ";
    for(int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    cout << "Failed Students (index): ";

    for(int i = 0; i < n; i++) {
        if(marks[i] < 35) {
            cout << i << " ";
        }
    }

    return 0;
}