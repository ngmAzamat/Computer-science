#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> years(16,0);  // сюда будем сохранять все числа
    vector<int> counts(16,0);  // сюда будем сохранять все числа
    int x;
    while (cin >> x) {
        if (x >= 2010 && x <= 2025) {
            years.push_back(x);  // добавляем число в вектор
        } else {
            cout << "Error" << endl;
        }
    }

    for (int i = 0; i < years.size(); i++) {
        // 
        int index = years[i] - 2010;
        counts[index]++;
    }

    for(int i = 0; i < counts.size(); i++) {
        cout << 2010 + i << ": " << counts[i] << endl;
    }

}