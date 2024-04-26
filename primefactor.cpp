#include <iostream>
#include <vector>
using namespace std;

vector<int> primeFactor(int n) {
    vector<int> p;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            p.push_back(i);
            while (n % i == 0) {
                n = n / i;
            }
        }
    }
    if (n != 1) {
        p.push_back(n);
    }
    return p;
}

int main() {
    int n;
    cin >> n;
    vector<int> p;
    p = primeFactor(n);
    for (int i = 0; i < p.size(); i++) {
        cout << p[i] << " ";
    }
    return 0;
}
