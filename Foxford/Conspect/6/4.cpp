#include <iostream>

using namespace std;

int main() {
    int n, k, m;
    cin >> n >> k >> m;
    int detali = 0;
    int zagotovki = 0;
    int dob = 0;
    while (n >= k) {
        dob = n / k;
        n = n % k;
        zagotovki = dob;
        dob = (k / m) * zagotovki;
        zagotovki = zagotovki * k - dob * m;
        detali = detali + dob;
        if (zagotovki != 0) {
            n = n + zagotovki;
            zagotovki = 0;
        }
    }
    cout << detali << endl;
}