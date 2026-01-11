#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<int> x(4, 0); // наш массив: 0 0 0 0
    cout << "Длина массива: " << x.size() << endl; // должно быть 4
    // Работает
    cout << "Сколько нам доступно места: "<< x.capacity() << endl;
    // Работает
    x.resize(5, 1); // теперь наш массив: 0 0 0 0 1 - так как вроде resize 1ками заполняет лишь то что не было заполнено(5ый элемент)
    cout << "Длина массива: " << x.size() << endl; //должно быть 5
    cout << "Сколько нам доступно места: " << x.capacity() << endl; // Сколько у нас места - по идее не должно поменятся
    // x.reserve(23373283728372); - то что я написал
    x.reserve(20); // рейд на оперативку
    cout << "Сколько нам доступно места: " << x.capacity() << endl; // Сколько у нас места - должно быть больше
    x.shrink_to_fit(); // срезаем весь жир у программы
    cout << "Сколько нам доступно места: " << x.capacity() << endl; // Сколько у нас места - должно быть сколько же сколько и size
    cout << "Первое число: " << x.front() << endl;  // Должно быть 0
    cout << "Последнее число: " << x.back() << endl;  // Должно быть 1
    x.insert(x.end(), 2); // push_back - тоже самое
    cout << "Последнее число: " << x.back() << endl; // Последнее число
    cout << "МАССИВ: " << endl;
    for (int i = 0; i < x.size(); i++) {
        cout << i + 1 << ": " << x[i] << endl;
    }
    // pop, push_back
    x.push_back(2); // push_back - тоже самое
    x.erase(x.end() - 2, x.end());
    x.push_back(33);
    x.pop_back();
    cout << "ИТОГО: " << endl;
    cout << "Сколько нам доступно места: " << x.capacity() << endl;
    cout << "Длина массива: " << x.size() << endl;
    cout << "МАССИВ: " << endl;
    for (int i = 0; i < x.size(); i++) {
        cout << i + 1 << ": " << x[i] << endl;
    }
    x.clear();
}