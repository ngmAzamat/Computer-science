#include <iostream>

using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    int newA = a * n;
    int newB = b * n;
    int newestB = newB % 100;
    int newestA = newA + newB / 100;
    cout << newestA << " " << newestB << endl;
    return 0;
}