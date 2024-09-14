#include<bits/stdc++.h>
using namespace std; 
// number to binary
int main(){
    int n  ;  cin>>n; 
    // 1101 
    int ans = 0 ; 
    int i=0;
   while(n>0){
int k = n%10; //  1
ans =ans+ k*pow(2,i);
i++;
n/=10;

}
   cout<<ans;

   // predefined function 
   string s ; 
   cin>>s; 
   cout<<stoi(s,0,2);
}