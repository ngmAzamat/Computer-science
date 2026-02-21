#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n = 26;
    vector<int> a;
    for (int i = 11; i <= 100;) {
        for (int j = 2; j <= n; j++) {
            bool isProst = true;
            for (int g = 2; g <= j; g++) {
                if (j % g == 0 && g != j) {
                    isProst = false;
                    break;
                }
            }
            if (isProst) {
                a.push_back(j);
            }
        }
        bool is = true;
        for (int b = 0; b < a.size(); b++) {
            if (n % a[b] == 0 && a[b] != 2 && a[b] != 5 && a[b] != 7) {
                is = false;
                break;
            }
        }
        if (is) {
            // cout << n << ' ';
            n++;
            i++;
        } else {
            n++;
        }
        a.clear();
    }
    cout << n - 1 << endl;
}