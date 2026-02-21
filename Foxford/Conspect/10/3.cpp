#include <iostream>

using namespace std;

int main () {
    int n, k;
    cin >> n >> k;
    int counter = 0;
    while (true) {
        n = n - k;
        k = k + 1;
        counter++;
        if (n <= 0) {
            break;
        }
    }
    cout << counter << endl;
}