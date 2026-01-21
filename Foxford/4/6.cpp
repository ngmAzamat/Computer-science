#include <iostream>

using namespace std;

int main() {
    int counter = 0;
    int a, b, c;
    cin >> a >> b >> c;
    while(c != a || b != a) {
        counter++;
        if (a > b) {
            a -= b;
        }
        int tmp = a;
        a = b;
        b = c;
        c = tmp;
    }
    cout << counter << endl;
}