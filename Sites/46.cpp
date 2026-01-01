#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    double x = 2.7182818284590452353602875;
    double r = round(x * pow(10, n)) / pow(10, n);
    cout << r << endl;
    return 0;
}