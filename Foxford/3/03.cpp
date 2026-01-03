#include <iostream>

using namespace std;

int main() {
    int counter = 10;
    int income = 10;
    int days = 31 + 28 + 31 + 30 + 31;
    for (int i = 2; i <= days; i++) {
        income = income + 20;
        counter = counter + income;
    }
    cout << counter << endl;
    return 0;
}