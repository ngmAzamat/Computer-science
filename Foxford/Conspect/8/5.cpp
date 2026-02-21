#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    bool stop = false;
    int a, b;
    for(int i = 2; i < n && !stop; i++) {
        bool isProst = true;
        for(int g = 2; g <= i; g++) {
            if (i % g == 0 && g != i) {
                isProst = false;
            }
        }
        if (isProst) {
            for (int j = 2; j < n && !stop; j++) {
                bool isProst2 = true;
                for(int t = 2; t <= j; t++) {
                    if (j % t == 0 && t != j) {
                        isProst2 = false;
                    }
                }
                if (isProst2) {
                    if (i + j == n) {
                        a = i;
                        b = j;
                        stop = true;
                    }
                } else {
                    continue;
                }
            }
        } else {
            continue;
        }
    }
    cout << a << ' ' << b << endl; 
}
