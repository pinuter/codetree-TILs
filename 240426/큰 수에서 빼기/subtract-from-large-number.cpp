#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b;
    c = a - b;
    d = b - a;

    if(a>b) {
        cout << c;
    }
    else {
        cout << d;
    }
    return 0;
}