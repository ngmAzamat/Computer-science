#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0 || n == 1) {
        cout << 1 << endl;
    }
    int counter = 1;
    int x = 0;
    for(int i = 2; i <= n; i++) {
        x = i;
        counter =  counter * x;
    }
    cout << counter << endl;
    return 0;
}