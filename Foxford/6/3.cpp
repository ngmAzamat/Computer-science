#include <iostream>

using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    int counter = 1;
    while (x < y)  {
        x = x + x / 10;
        counter++;
    }
    cout << counter << endl;
    return 0;
}