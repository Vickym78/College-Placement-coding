#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if(n<2) return false;
    for(int i = 2;i*i<=n;i++){
            if(n%i ==0) return false;
    }
    return true;
}

int main(){
    int n; cin>>n; 
    int arr[n];
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }
    int sum =0;

    for(int i =0 ; i<n;i++){
        if(isprime(i)){
            sum+=arr[i];
        }
    }

    cout<<sum;
}