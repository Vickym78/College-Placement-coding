#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int k ; cin>>k;
    
    /*
    int c=0;
    string temp="";
    vector<string>ans;
    for(int i = 0 ;i<s.length();i++){
           if(s[i]!=' ')temp+=s[i];
           if(s[i]==' '){
            ans.push_back(temp);
            temp="";
            c++;
           }
           if(c==k) break;
           
    }
    if (!temp.empty() && c < k) {
        ans.push_back(temp);
    }

    for(int i = 0 ;i<ans.size();i++){
        cout<<ans[i]<<" ";
    } 
    */


int c=0;
   for(int i = 0 ;i<s.length();i++){
    if(s[i]==' '){
            c++;
            if(c==k) {cout<<s.substr(0,i);return 0;}
    }
   }

   cout<<s;
   return 0;
}