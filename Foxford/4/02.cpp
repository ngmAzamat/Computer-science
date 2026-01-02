#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int dobavka = 0;
    if ((m % n) > 0) {
        dobavka = 1;
    } else {
        dobavka = 0;
    }
    int res = m / n + dobavka;
    cout << res << endl;
}