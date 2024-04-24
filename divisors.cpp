#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> printAllDivisors(int n) {
    vector<int> ans;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            ans.push_back(i);
            if (n / i != i) { 
                ans.push_back(n / i);
            }
        }
    }
    sort(ans.begin(),ans.end());
    for(auto it:ans){
        cout<<it<<" ";
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> ans = printAllDivisors(n); 
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
