#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    bool esle = a != 0 && b != 0 && c != 0;
    int counter = 2;
    while(esle) {
        a = a - 1;
        b = b - 1;
        c = c - 1;
    }
}