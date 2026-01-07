#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int counter = 0;
    while (x < y)  {
        x = x + x / 10;
        counter++;
    }
    cout << counter << endl;
    return 0;
}