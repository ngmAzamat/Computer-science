#include <iostream>
#include <vector>
using namespace std;

int main() {
    int counter = 0;
    int n;
    cin >> n;
    vector<int> x;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            x.push_back(i);
        }
    }
    for (int i = 0; i < x.size(); i++) {
        if (i != x.size() - 1) {
            cout << x[i] << " ";
        } else {
            cout << x[i] << endl;
        }
    }
    return 0;
}