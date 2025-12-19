#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    int first = 0;
    int second = 1;
    int number = first + second;
    int counter = 3;
    if (a == 1) {
        cout << 0 << endl;
    } else if (a == 2) {
        cout << 1 << endl;
    } else  {
        while (counter < a) {
            first = second;
            second = number;
            number = first + second;
            counter = counter + 1;
        }
        cout << number << endl;
    }
    return 0;
}