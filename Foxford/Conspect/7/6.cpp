#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int> v(n, 0);
    int x = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v[i] = x;
    }
    int result = 1;
    int item = 1;
    bool isB = false;
    while (true) {
        for (int i = 0; i < v.size(); i++) {
            if (item == v[i]) {
                isB = true;
                item = v[i];
                break;
            }
            continue;
        }
        if (isB == true) {
            break;
        }
        item++;
    }
    int maximum;
    for (int i = 1; i <= item; i++) {
        int n1 = 0;
        for (int j = v[n1]; n1 <= v.size(); j = v[n1]) {
            if (j % i == 0) {
                maximum = i;
            }
            n1++;
        }
    }
    cout << maximum << endl;
}