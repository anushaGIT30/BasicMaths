#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> printingPermutations(vector<int> v, int n) {
    sort(v.begin(), v.end());
    while (next_permutation(v.begin(), v.end())) {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return v;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }
    vector<int> ans = printingPermutations(v, n);
    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
