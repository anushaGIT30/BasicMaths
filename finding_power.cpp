#include <iostream>
using namespace std;

int findingPower(int n, int x) {
    int result = 1;
    for(int i = 1; i <= n; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int n, x;
    cout << "Enter the exponent (n): ";
    cin >> n;
    cout << "Enter the base (x): ";
    cin >> x;
    int ans = findingPower(n, x);
    cout << "Result: " << ans << endl;
    return 0;
}
