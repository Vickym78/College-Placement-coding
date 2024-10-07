#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin>>n; 
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    // 1 1 0 0 1 1 1 0 1 1
    int current = 0 , maxi =0;
    for(int i =0;i<n;i++){
        int j = i ;
        while(arr[j]!=0){
            current++;
            j++;
        }
        maxi = max(current, maxi);
       i = j;


    }

    cout<<maxi;



return 0 ; 
}
