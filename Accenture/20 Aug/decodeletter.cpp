#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin,s);
    unordered_map<int,string>mpp;
    char ch ='A';
    for(int i = 1; i<=26;i++){
        mpp[i] =ch;
        ch++;
    }
    /*
    for(auto it : mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }*/
    string ans ="";
    int c= 0 ;
    for(int i = 0 ;i<s.length();i++){
        if(s[i]=='0'){
            if(mpp.find(c) !=mpp.end()){
                ans+=mpp[c];
            }
            c=0;
        }
        c++;
    }

    cout<<ans;
}