#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin>>n;
    vector<int>arr(n);
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }

    int c=0;
    for(int i = 0 ;i<n-1;i++){
        if(arr[i]%3==0) c++;
    }
    cout<<c;
}