#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    map <string, int> legions;  // сюда будем сохранять все числа
    vector<int> counts(16,0);  // сюда будем сохранять все числа
    int x;
    while (cin >> x) {
        if (x >= 4000 && x <= 6000) {
            legions.insert(x, x);  // добавляем число в вектор
        } else {
            cout << "Error" << endl;
        }
    }

    for (int i = 0; i < legions.size(); i++) {
        int index = legions[i] - 2010;
        counts[index]++;
    }

    for(int i = 0; i < counts.size(); i++) {
        cout << legions[i] << ": " << counts[i] << endl;
    }

}