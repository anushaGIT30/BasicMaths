#include<bits/stdc++.h>
using namespace std;
    int countPrimes(int n) {
        int count=0;
       int prime[n+1];
    for(int i=2;i<n;i++){
        prime[i]=1;

    }
    for(int i=2;i*i<=n;i++){
        if(prime[i]==1){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=0;
            }

        }
    }
     for(int i=2;i<=n;i++){
        if(prime[i]==1){
            count=count+1;
        }
     }
    
    return count;
    }
    int main(){
        int n;
        cin>>n;
        int r=countPrimes(n);
        cout<<r;
    }
