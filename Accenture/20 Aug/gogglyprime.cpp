#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin>>n; 
    // google prime : - sum of digit is prime

    int sum = 0 ; 
    while(n>0){
        int k  = n%10;
        sum+=k;
        n/=10;
           }
if(sum<2){ cout<<"NO" ; return 0;
}
for(int i =2 ; i*i<=sum;i++){
    if(sum%i==0) {cout<<"No" ; return 0;}
}

cout<<"yes"; return 0;

}