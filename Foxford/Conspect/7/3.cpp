#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p = 2;
    while (n != 0) {
        int a = n % 10;
        if (a >= p) {
            p = a + 1;
        }
        n /= 10;
    }
    cout << p << endl;
}