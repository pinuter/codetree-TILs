#include <iostream>
using namespace std;

int main() {
    int a, b, result;

    cin >> a >> b;
    result = a > b ? a : b;
    cout << result << endl;

    return 0;
}