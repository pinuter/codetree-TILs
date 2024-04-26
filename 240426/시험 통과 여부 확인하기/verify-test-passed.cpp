#include <iostream>
using namespace std;
int main() {
    int n, a;
    cin >> n;
    a = 80 - n;

    if(n >= 80) {
        cout << "pass";
    }

    else{
        cout << a << " more score";
    }
    return 0;
}