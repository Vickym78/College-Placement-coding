#include<bits/stdc++.h>
using namespace std; 

int main(){
    int r; cin>>r; 
    int arr[r][r];
    for(int i =0;i<r;i++){
        for(int j  = 0 ; j<r;j++){
            cin>>arr[i][j];
        }
    }


//
int x,y; 
for(int i  = 0 ;i<r;i++){
    for(int j =0; j<r;j++){
        if(arr[i][j]==0) {
                x=i; y =j;
        }
    }
}


for(int i = 0 ;i<r;i++){
    for(int j = 0 ;j<r;j++){
        if(i==x || j==y){
            arr[i][j]==0;
        }
    }
}


for(int i = 0 ;i<r;i++)
{
    for(int j = 0 ;j<r; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}