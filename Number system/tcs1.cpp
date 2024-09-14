#include<bits/stdc++.h>
using namespace std;

int main(){
int r, col ; cin>>r>>col;
int arr[r][col];

for(int i =0;i<r;i++){
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
}
// daigonal difference
int cd = 0 , md= 0;
for(int i =0;i<r;i++){
    for(int j = 0 ; j<col;j++){
        if(i==j) cd = cd+ arr[i][j];
        if(i+j==r-1) md+=arr[i][j];
    }
}

cout<<abs(cd-md);
}