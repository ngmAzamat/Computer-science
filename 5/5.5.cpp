#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;  // сюда будем сохранять все числа
    int x;
    while (cin >> x) {
        numbers.push_back(x);  // добавляем число в вектор
    }

    int size = numbers.size(); // общее количество введённых чисел

    int counter = 0;
    int number = 0;
    while (counter < size) {
        int n = numbers[counter];
        if (n == size) {
            number = n;
            break;
        }
        counter++;
    }

    bool all_present = true;
    for (int i = 1; i <= number; i++) {
        bool found = false;
        for (int num : numbers) {
            if (num == i) {
                found = true;
                break;
            }
        }
        if (!found) {
            all_present = false;
            break;
        }
    }

    if (number != 0 && all_present) {
        cout << "OK" << endl;
    } else {
        cout << "BAD" << endl;
    }
    // теперь можно проверять: есть ли среди введенных все числа от 1 до n, если да то выводим "OK"
}