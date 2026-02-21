#include <bits/stdc++.h>
using namespace std;

void swapp(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main() {
    int a , b ;
    cin >> a >> b;
    int *x = &a;
    int *y = &b;
    // swapp(&a, &b);
    swapp(x,y);
    cout << a << " " << b;

    return 0;
}


//pass by alias.........................

// #include <bits/stdc++.h>
// using namespace std;

// void swapp(int &x, int &y) {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// int main() {
//     int x, y;

//     cout << "Enter x: ";
//     cin >> x;

//     cout << "Enter y: ";
//     cin >> y;

//     swapp(x, y);

//     cout << "x = " << x << endl;
//     cout << "y = " << y << endl;

//     return 0;
// }

