#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    getline(cin,s);
    
    int cc= 0;
    for(int i = 0 ;i<s.length();i++){
          if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U')  cc++; 
    }

    int len= s.length() - cc;
    int ans = 1;
    for(int i = 1 ;i<=len;i++){
        ans*=i;
    }
    cout<<ans;




}