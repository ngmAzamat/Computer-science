#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int counter = 0;
    while(true) {
        counter++;
        a -= 1;
        if (a == 0) {
            break;
        }
        counter++;
        b -= 1;
        if (b == 0) {
            break;
        }
        counter++;
        c -= 1;
        if (c == 0) {
            break;
        }
    
    }
    cout << counter << endl;
}