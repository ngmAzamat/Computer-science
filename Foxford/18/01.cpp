#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    int first = numbers[0];
    int maximum = numbers[0];
    int num = 0;
    for (int i = 1; i < n; i++) {
        if (numbers[i] > maximum) {
            maximum = numbers[i];
            num = i;
        }
    }
    numbers[0] = maximum;
    numbers[num] = first;
    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            cout << numbers[i] << " ";
        } else {
            cout << numbers[i] << endl;
        }
    }
}