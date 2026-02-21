#include <iostream>
#include <map>

using namespace std;

int main () {
    map<string, int> battles;
    battles["Battle of Crecy"] = 1348;
    battles["Battle of Pavia"] = 1525;
    cout << battles.at("Battle of Pavia") << endl;
    // cout << battles["Battle of Pavia"] << endl; тоже можно
    map<int, string> dates;
    dates[1525] = "Battle of Pavia"; 
    cout << dates.at(1525) << endl;
    for (const auto [key, value] : dates) {}
    dates.erase(1525);
    dates.insert({1525, ""});
    cout << dates[1525] << endl;
}