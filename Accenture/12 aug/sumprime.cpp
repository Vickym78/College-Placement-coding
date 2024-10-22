#include<bits/stdc++.h>
using namespace std;

bool isprime(int n ){
    for(int i = 2 ; i*i<=n;i++){
        if(n%i ==0) return false;
    }
    return true;
}

int main(){
    int n; cin>>n;
    if(n<2) {cout<<0; return 0;}
    int sum =0; 
    for(int i=2;i<=n;i++){
        if(isprime(i)) sum+=i;
    }
    cout<<sum;

}