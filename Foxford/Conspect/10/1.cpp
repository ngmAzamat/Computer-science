#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int counter = 0;
    for (int i = 1; i < n - 1; i++) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
            counter++;
        }
    }
    cout << counter << endl;
}