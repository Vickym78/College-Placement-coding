#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin>>n;
    int arr[n];
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }
int c = 0 ;
    for(int i = 0 ; i<n;i++){
            if(c%2 ==0 ) {
                if(arr[i]==0) c++;
            }
            else{
                if(arr[i] == 1) c++;
            }
    }

    cout<<c;
    return 0;
}