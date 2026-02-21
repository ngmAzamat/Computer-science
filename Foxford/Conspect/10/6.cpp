#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> a(30, 0);
    for (int i = 0; i < 30; i++) {
        cin >> a[i];
    }
    int longe = 0;
    for (int i = 0; i < 30; i++) {
        if (longe <= a[i] && a[i] % 5 != 0) {
            longe = a[i];
        }
    }
    for (int i = 0; i < 30; i++) {
        if (a[i] % 5 != 0) {
            a[i] = longe;
        }
    }
    for (int i = 0; i < 30; i++) {
        cout << a[i] << ' ' << endl;
    }
}