#include <iostream>
#include <vector>
using namespace std;

int main() {
    int counter = 0;
    int n;
    cin >> n;
    vector<int> x (n, 0);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == 0) {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}