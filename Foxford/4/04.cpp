#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    int edinysy = a % 10;
    int ostatok = a / 10;
    int sotny = ostatok % 10;
    int last = ostatok / 10;
    int result = edinysy + sotny + last;
    cout << result << endl;
    return 0;
}