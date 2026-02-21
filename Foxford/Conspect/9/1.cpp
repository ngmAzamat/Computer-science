#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int a1 = a;
    int b1 = b;
    int result = 0;
    while(true) {
        a1++;
        b1++;
        result++;
        a1 = a1 % a;
        b1 = b1 % b;
        if (a1 == 0 && b1 == 0) {
            break;
        }
    }
    cout << result << endl;
}