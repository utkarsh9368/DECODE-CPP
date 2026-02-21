#include <bits/stdc++.h>
using namespace std;

void swapp(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int x, y;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    swapp(x, y);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}