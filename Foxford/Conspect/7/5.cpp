#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    string result;
    while (n != 0) {
        result += n % 8 + '0';
        n /= 8;
    }
    int s = result.length();
    int result1 = stoi(result);
    for (int i = 0; i < s; i++) {
        cout << result1 % 10 << endl;
        result1 /= 10;
    }
}