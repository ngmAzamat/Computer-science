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
        counter = counter + x[i];
    }
    cout << counter << endl;
    return 0;
}