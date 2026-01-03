#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string result = "prime";
    for (int i = 2; i < n;i++) {
        if (n % i == 0) {
            result = "composite";
        }
    }
    cout << result << endl;
    return 0;
}