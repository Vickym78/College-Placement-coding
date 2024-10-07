#include<bits/stdc++.h>
using namespace std;


int main(){
    string n ; cin>>n; 
    int c1 = 0 , c2= 0 ;
    for(int i=0;i<n.length();i++){
        if(n[i]=='*') c1++;
        else c2++;
    }

    cout<<c1-c2;
}