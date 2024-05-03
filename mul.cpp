#include <iostream>
using namespace std;

int printingSum_of_multiple(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i * i; // Add the square of the current number to the sum
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int r = printingSum_of_multiple(n);
    cout << "Sum of multiples of integers from 1 to " << n << " is: " << r << endl;
    return 0;
}
