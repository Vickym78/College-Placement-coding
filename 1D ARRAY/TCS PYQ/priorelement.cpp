#include<bits/stdc++.h>
using namespace std;


int main(){
    int n ; cin>>n;
    vector<int>v(n);
    for(int i =0;i<n;i++){
            cin>>v[i];
    }

    // 7 4 8 2 9
    int maxi  =v[0];
    int c= 1 ; 
    for(int i =1;i<n;i++){
            if(v[i]>maxi) {
                c++;
                maxi = v[i];
            }
    }

    cout<<c;
}