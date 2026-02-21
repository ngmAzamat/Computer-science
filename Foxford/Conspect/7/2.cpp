#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if(n % i == 0) {

            bool isBoole = true;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0 && j != 1 && j != i) {
                    isBoole = false;
                    break;
                }
            }
            if (isBoole && i != 1) {
                cout << i << ' ';
            }
        }
    }
    return 0;
}