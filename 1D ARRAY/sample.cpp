#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &v, int r ,int c){

    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            if(i<j) v[i][j] =0;
        }
    }

    for(int i =0;i<r;i++){
        for(int j = 0 ;j<c;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int t; cin>>t; 
    while(t--){
        int r , c; cin>>r>>c; 
        vector<vector<int>>arr(r, vector<int>(c));
        for(int i =0;i<r;i++){
            for(int j =0;j<c;j++){
                cin>>arr[i][j];
            }
        }
        cout<<"Output : "<<endl;
        solve(arr,r,c);
    }
}