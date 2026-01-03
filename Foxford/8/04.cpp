#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    int result = 1;
    for (int i = 1; i < n;i++) {
        if (n % i == 0) {
            result = i;
        }
    }
    cout << result << endl;
    return 0;
}