#include <iostream>

using namespace std;

int main() {
    int s, n;
    cin >> s;
    cin >> n;
    int x;
    int VesRukzaka = 0;
    int VesBagazha = 0;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if (x <= s) {
            VesRukzaka += x;
            s -= x;
        } else {
            VesBagazha += x;
        }
    }
    cout << VesRukzaka << " " << VesBagazha << endl;
}