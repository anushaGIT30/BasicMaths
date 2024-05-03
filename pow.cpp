#include<iostream>
using namespace std;

int power(int x, int n) {
    int m = n;
    int ans = 1;
    while (n != 0) {
        if (n % 2 == 1) {
            ans *= x;
            n -= 1;
        } else {
            x *= x;
            n /= 2;
        }
    }
    if (m < 0) {
        ans = 1 / ans;
    }
    return ans;
}

int main() {
    int x, n;
    cin >> x >> n;
    int r = power(x, n);
    cout << r;
    return 0;
}
//this code has the time complexity of o(logn)