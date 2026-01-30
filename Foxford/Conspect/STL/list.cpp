#include <iostream>
#include <list>

using namespace std;

int main () {
    list<int> x(4, 0); // наш массив: 0 0 0 0
    cout << "Длина массива: " << x.size() << endl;
    cout << "Первое число: " << x.front() << endl; 
    cout << "Последнее число: " << x.back() << endl; 
    x.insert(x.end(), 2);
    cout << "Последнее число: " << x.back() << endl;
    cout << "МАССИВ: " << endl;
    for (int i = 0; i < x.size(); i++) {
        cout << i + 1 << ": " << x[i] << endl;
    }
    x.push_back(2);
    x.push_back(33);
    x.pop_back();
    cout << "ИТОГО: " << endl;
    cout << "Длина массива: " << x.size() << endl;
    cout << "МАССИВ: " << endl;
    for (int i = 0; i < x.size(); i++) {
        cout << i + 1 << ": " << x[i] << endl;
    }
    x.clear();
}