#include<bits/stdc++.h>
using namespace std;

int main(){
    string s ; 
    getline(cin,s);
    // remove dublicate element 
    set<string>v;
    string temp;
    for(int i =0;i<s.length();i++){
        
        
        if(s[i]==' ')
        { 
            v.insert(temp);
            temp="";
        }
        else temp+=s[i];
    }

    //
    for(auto it : v){
        cout<<it<<" ";
    }
    
}