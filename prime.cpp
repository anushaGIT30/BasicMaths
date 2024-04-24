#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            // If i is a divisor of n, increment count
            count++;
            // If i * i is not equal to n, then n/i is also a divisor of n, so increment count
            if (i * i != n) {
                count++;
            }
        }
    }
    if (count == 2) {
        cout << "prime";
    } else {
        cout << "not";
    }
    return 0;
}
