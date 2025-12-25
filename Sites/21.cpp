#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int bigger, smaller;
    if (a >= b && a >= c) {
        bigger = a;
    } else if (b >= c) {
        bigger = b;
    } else {
        bigger = c;
    }

    if (a <= b && a <= c) {
        smaller = a;
    } else if (b <= c) {
        smaller = b;
    } else {
        smaller = c;
    }
    int result = bigger - smaller;
    cout << result << endl;
    return 0;
}