#include<bits/stdc++.h>
using namespace std;
// fibo series sum tcs
int fibo(int n ){
    if(n==0) return 0;
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}

int main(){
    int n;  cin>>n;
    int ans = 0 ; 
    for(int i = 0 ;i<n;i++){
        ans += fibo(i);
    }
    cout<<ans;
}