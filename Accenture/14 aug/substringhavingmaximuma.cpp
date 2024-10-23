#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin,s); int k ; cin>>k;
    // using slidng window
    int c= 0 , maxi =c;
    for(int i =  0 ;i<k;i++){
        if(s[i]=='a') c++;
    }

    maxi =c; 
   
    for(int i = 1;i<s.length()-k+1;i++){
        if(s[i-1]=='a') c--;
        if(s[k+i-1]=='a') c++;
        maxi = max(c,maxi);
    }

    cout<<maxi;

}