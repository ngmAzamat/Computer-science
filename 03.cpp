#include <iostream>

using namespace std;

int main() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int dx = a1 - b1;
    int dy = a2 - b2;
    if (dx < 0) {
        dx = -dx;
    }
    if (dy < 0) {
        dy = -dy;
    }
    int result = dx + dy;
    cout << result << endl;
    return 0;
}