#include<bits/stdc++.h>
using namespace std; 


int main(){
    string s ; 
    getline(cin,s);
    for(int i =0;i<s.length();i++){
            cout<<s[i];
    }
    cout<<endl;
    // check for plaindrome
    /*
    string t = s;
    reverse(s.begin(),s.end());
    if(t==s) cout<<"palindrome"<<" "; 
    else cout<<"not palindrome";

    */

   // count words on string i am vicky mahato = 4 words
 /*  int c = 0 ; 
   for(int i =0;i<s.length();i++){
    if(s[i]==' ') c++;
   }

   cout<<c+1;
   */

  // count vowels
/*  int c = 0 ; 

  for(int i = 0 ; i <s.length();i++){
    if(s[i] =='a' || s[i] =='e' || s[i]=='i' || s[i]=='u' || s[i]=='o' ||s[i] =='A' || s[i] =='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' )
            c++;
 
 

  }

  cout<<c ; 

  */


 // checking Aagrams 
 string t  ; 
 getline(cin,t);
sort(s.begin() , s.end());
sort(t.begin() ,t.end()); 
if(s==t) cout<<true;
else cout<<false;

return 0;
  
  
  }