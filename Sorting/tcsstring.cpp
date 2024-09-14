#include<bits/stdc++.h>
using namespace  std;

int main(){
    string s; 
    getline(cin,s);
    vector<int>v(2,0);
    for(int i =0;i<s.length();i++){
        if(s[i]=='*') v[0]++;
        else v[1]++;
    }

  cout<< v[0]-v[1];
}