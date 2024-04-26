#include <iostream>
using namespace std;
int main() {
    int n, c;
    cin >> n;
    c = n*n;

    cout << c;
    if(n > 5) {
        cout << endl << "tiny";
    }
    return 0;
}