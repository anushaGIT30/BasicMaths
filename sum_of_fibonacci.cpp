#include<bits/stdc++.h>
using namespace std;

int sum_of_fibonacci(int n){
    int sum = 0;
    int t1 = 0;
    int t2 = 1;
    sum = t1 + t2; 
    for(int i = 3; i <= n; i++){ 
        int t3 = t1 + t2;
        sum += t3;
        t1 = t2;
        t2 = t3;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    int res = sum_of_fibonacci(n);
    cout << res;
    return 0;
}
