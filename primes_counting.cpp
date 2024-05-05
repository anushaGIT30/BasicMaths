#include<iostream>
using namespace std;

int counting(int n, int left, int right) {
    int count = 0;
    int prime[n+1];
    
    for(int i = 2; i <= n; i++) {
        prime[i] = 1;
    }
    
    for(int i = 2; i * i <= n; i++) {
        if(prime[i] == 1) {
            for(int j = i * i; j <= n; j += i) {//optimized
                prime[j] = 0;
            }
        }
    }
    
    for(int i = left; i <= right; i++) {
        if(prime[i] == 1) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int test_cases;
    cout << "Enter the number of test cases: ";
    cin >> test_cases;
    
    while(test_cases--) {
        int l, r;
        cout << "Enter the range [left, right]: ";
        cin >> l >> r;
        
        int res = counting(r, l, r);
        cout << "Number of prime numbers between " << l << " and " << r << ": " << res << endl;
    }
    
    return 0;
}

