// rotate by 90 degree
#include<bits/stdc++.h>
using namespace std; 


int main(){
    int r , c ; cin>>r>>c;
    int arr[r][c]; 
    for(int i = 0;i<r;i++){
        for(int  j = 0 ;j<c; j++){
            cin>>arr[i][j];
        }
    }
 for(int j = 0 ;j<c;j++){
        for(int i =r-1;i>=0;i--){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}