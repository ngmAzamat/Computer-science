#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int n;
    cin >> n;
    unordered_map<string, int> a;
    a["1"] = 1346;
    cout << a.at("1") << endl;

}