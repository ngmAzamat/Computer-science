#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int minuteInDay = 24 * 60;
    int baseMinute = n % minuteInDay;
    int chas = baseMinute / 60;
    int minute = baseMinute % 60;
    cout << chas << " " << minute << endl;
    return 0;
}