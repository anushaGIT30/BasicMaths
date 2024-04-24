#include<iostream>

#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
int count=0;
for(int i=1;i<=sqrt(n);i++){
    //for(int i=1;i*i<=n;i++)
    if(n%i==0){
        count=count+1;
    }
    if(n%i!=i){
        count=count+1;
        
    }
    if(count>2){
        break;
    }
    if(count==2){
        cout<<"is a prime"<<endl;
    }
    else
    cout<<"not a prime"<<endl;

}

}