#include<iostream>
using namespace std; 

int main(){
    int row , col;cin>>row>>col;
    int arr[row][col]; int brr[row][col];

    for(int i =0;i<row ;i++){
        for(int j =0 ; j<col;j++){
            cin>>arr[i][j];
        }
    }

for(int i =0;i<row ;i++){
        for(int j =0 ; j<col;j++){
            cin>>brr[i][j];
        }
    }

  /*  int max = arr[0][0]; 
    for(int i=0;i<row; i++){
        for(int j=0;j<col;j++){
            if(max<arr[i][j]) max =arr[i][j];
        }
    }
    cout<<max;*/

    // sum of two matrices
    
    for(int i =0;i<row;i++){
        for(int j= 0;j<col;j++){
            arr[i][j]+=brr[i][j];
        }
    }

for(int i =0;i<row ;i++){
        for(int j =0 ; j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }




}