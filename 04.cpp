#include <iostream>

using namespace std;

int main() {
    int n, k;
    int smaller = n / k;
    int bigger = smaller + k;
    int delta1 = bigger - n;
    int delta2 = n - smaller;
    int minimumius = min(delta1, delta2);
    return 0;
}