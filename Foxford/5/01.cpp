#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    bool first = a % 4 == 0;
    bool second = a % 100 == 0;
    bool third = a % 400 == 0;
    if ((first && !second) || third) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}