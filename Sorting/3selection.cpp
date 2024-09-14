#include<bits/stdc++.h>
using namespace std;

int main(){
    int n  ; cin>>n ; 
     int arr[n];
     for(int i =0;i<n;i++){
        cin>>arr[i];
     }

     // selection sort

for(int  i = 0;i<n;i++){
    int min_idx = i; 
    for(int j = i+1;j<n-1;j++){
        if(arr[j]<arr[min_idx]) {
            min_idx = j;
        }
    }

    if(min_idx!=i){ // findin minimun index and swap it from first element
        swap(arr[i],arr[min_idx]);
    }
}


for(int i = 0 ;i<n;i++){
    cout<<arr[i];
}
}