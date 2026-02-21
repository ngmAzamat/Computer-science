#include <iostream>
using namespace std;
int main() {
    int counter = 0;
    bool is = true;
    for (int i = 1; i <= 2022; i++) {
        is = true;
        int cur1 = i;
        int cur2 = 0;
        while (cur1 != 0) {
            cur2 += cur1 % 10;
            cur1 = cur1 / 10;
        }
        if (cur2 != 1) {
            for (int j = 1; j <= cur2; j++) {
                if (j != 1 && j != cur2 && cur2 % j == 0) {
                    is = false;
                    break;
                } 
            }
        } else {
            continue;
        }
        if (is == true) {
            counter++;
        }
    }
    cout << counter << endl;
}