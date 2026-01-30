#include <iostream>

using namespace std;

int main() {
    int firstChas, firstMinut, secondChas, secondMinut;
    cin >> firstChas >> firstMinut >> secondChas >> secondMinut;
    int counter = 0;
    while (!(firstChas == secondChas && firstMinut == secondMinut)) {
        if (firstMinut == 60) {
            firstMinut = 0;
            firstChas += 1;
        }
        if (firstMinut == 30) {
            counter += 1;
        }
        if (firstMinut == 0) {
            if (firstChas == 24 || firstChas == 12) {
                counter += 12;
                if (firstChas == 24) {
                    firstChas = 0;
                }
            }
            counter += firstChas % 12;
        }
        firstMinut += 1;
    }
    cout << counter << endl;
}