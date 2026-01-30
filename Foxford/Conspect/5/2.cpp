#include <iostream>
#include <string>

using namespace std;

int main() {
    int chas;
    cin >> chas;
    char dvoe;
    cin >> dvoe;
    int minuta;
    cin >> minuta;
    string am;
    cin >> am;
    if (am == "a.m.") {
        cout << chas << dvoe << minuta << endl;
    } else if (am = "p.m.") {
        cout << chas + 12 << dvoe << minuta << endl;
    } else {
        cout << "Такого не может быть!" << endl;
    }
    
}