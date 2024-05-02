#include<bits/stdc++.h>
using namespace std;
int sum_of_numbers(int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int r=sum_of_numbers(n);
    cout <<r;
}