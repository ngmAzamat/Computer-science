#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n, k;
    cin >> n >> k;
    vector<int> a(n, 0);
    vector<int> b(k, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < k; i++) {
        bool no = false;
        for (int j = 0; j < n; j++) {
            if (b[i] == a[j]) {
                cout << "YES" << endl;
                no = true;
                break;
            }
        }
        if(!no) {
            cout << "NO" << endl;
        }
    }
}