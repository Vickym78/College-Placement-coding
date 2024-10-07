#include<bits/stdc++.h>
using namespace std;

int main(){
int n ; cin>>n; 
vector<int>arr(n);
for(int i =0;i<n;i++){
    cin>>arr[i];
}

int k ; cin>>k;
sort(arr.begin(),arr.end()); // 1 3 4 7 9 9 12 56
int diff = arr[k-1] - arr[0];
int ans = diff;
int pre, next;
for(int i =1;i<n-k+1;i++){
    pre  =arr[i];
    next  = arr[i+k-1]; // 1+5 -1 ; 
    diff = next - pre;
    ans = min(ans  ,diff);
}

cout<<ans;

}