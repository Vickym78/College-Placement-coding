#include<bits/stdc++.h>
using namespace std;


int main(){
    int n ; cin>>n; 
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

   int k ; cin>>k;
   int sum = 0 ; int msum=0;
   for(int i =0;i<k;i++){
        sum+=arr[i];
   }
   int m=0 ,t=0;
   msum = sum;
   for(int i =1;i<n-k+1;i++){
    int presum = arr[i-1];
    int nextsum = arr[i+k-1];
    sum = sum-presum + nextsum;
    msum = max(sum,msum);
    if(sum ==msum){
            m = i;
            t= i+k-1;
    }
   }
   cout<<msum<<" "<<m<<" "<<t; // index of maxsum
}