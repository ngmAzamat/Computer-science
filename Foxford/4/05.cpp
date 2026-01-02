#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int result;
    if (a >= b && a >= c) {
        result = a;
    } else {
        if (b >= c) {
            result = b;
        } else {
            result = c;
        }
    }
    cout << result << endl;
    return 0;
}