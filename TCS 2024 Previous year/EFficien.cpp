#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n ; cin>>n; 
    int arr[n] ; 
     for(int i =0 ;i<n;i++){
        cin>>arr[i];
     }
     int k = 3; 
     long long pro = 1;
     for(int i =0;i<k;i++){
            pro*=arr[i];
     }

     long long ans = pro;
     for(int i =1;i<n-k+1;i++){
        int pre = arr[i-1];
        int next=arr[i+k-1];
        pro = (pro/pre)*next;
        ans = max(pro, ans);
     }

     // used sorting methodas
     
     cout<<ans;
}