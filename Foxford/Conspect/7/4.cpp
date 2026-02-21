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
    int counter = 0;
    int counter2 = 0;
    for (int i = 0; i < s; i++) {
        counter++;
        int a = result1 % 10;
        if (a % 2 == 0) {
            counter2 += a;
        }
        result1 /= 10;
    }
    cout << counter << ' ' << counter2 << endl;
}