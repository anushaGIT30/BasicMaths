#include <iostream>
#include <cmath>

using namespace std;

int sumofCubes(int n,int m){
    int sum=0;
   
    for(int i=n;i<=m;i++){
        sum+=i*i*i;
    }
    return sum;
}
int main(){
    int n,m;
    cin>>n>>m;
    int res=sumofCubes(n,m);
    cout<<res;
}

