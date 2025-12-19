#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int smal = n % k;
    int smaller = n - smal;
    int bigger = smaller + k;
    int delta1 = bigger - n;
    int delta2 = n - smaller;
    int minimumius = min(delta1, delta2);
    cout << minimumius << endl;
    return 0;
}

#include <algorithm>
#include <cstdlib>
#include <iostream>
using namespace std;
int main () {
    int n, k;
    cin >> n >> k;
    int i = max(n / k, 1);
    int ans1 = abs(n - k * i);
    ++i;
    int ans2 = abs(n - k * i);
    cout << min(ans1, ans2) << endl;
}
