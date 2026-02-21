#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int> a;
    int n1 = 1, n2 = 1, n3 = 1;
    for (int i = 1; i <= n; i++) {
        if (i * i <= n) {
            a.push_back(i);
        }
    }

    vector<int> result;
    bool stop = false;
    for(int i = 0; i < a.size() && !stop; i++) {
        if (a[i] * a[i] == n) {
            result.push_back(a[i]);
            stop = true;
            break;
        } else {
            for(int j = 0; j < a.size() && !stop; j++) {
                if (a[i] * a[i] + a[j] * a[j] == n) {
                    result.push_back(a[i]);
                    result.push_back(a[j]);
                    stop = true;
                    break;
                } else {
                    for(int d = 0; d < a.size() && !stop; d++) {
                        if (a[i] * a[i] + a[j] * a[j] + a[d] * a[d] == n) {
                            result.push_back(a[i]);                    
                            result.push_back(a[j]);
                            result.push_back(a[d]);
                            stop = true;
                            break;
                        } else {
                            for(int g = 0; g < a.size() && !stop; g++) {
                                if (a[i] * a[i] + a[j] * a[j] + a[d] * a[d] + a[g] * a[g] == n) {
                                    result.push_back(a[i]);                    
                                    result.push_back(a[j]);
                                    result.push_back(a[d]);
                                    result.push_back(a[g]);
                                    stop = true;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << ' '; 
    }
}