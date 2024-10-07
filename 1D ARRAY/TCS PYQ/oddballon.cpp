#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin>>n;
    vector<char>str(n);
    for(int i =0;i<n;i++){
            cin>>str[i];
    }

    unordered_map<char,int> mpp;
    for(int i =0;i<n;i++){
        mpp[str[i]]++;
    }
    for(auto it : mpp){
        if(it.second %2 !=0){
                cout<<it.first<<" ";
        }
    }
}