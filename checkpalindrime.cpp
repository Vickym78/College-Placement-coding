#include<iostream>
using namespace std;

int rev(int n ){
    int reverse = 0 ;
     while(n>0){
        int k = n%10; 
        reverse = reverse*10+k;
        n/=10;

     }

     return reverse;
}

void checkpalindrome(int n ){
    if(n==rev(n)) cout<<"palindrome";
    else cout<<"not palindrome";
 }

int main(){
    int n; cin>>n;
    checkpalindrome(n);
}