/*

A number is magical number if
inside a range number
 convert in binary
replace 0 with 1 and 1 with 2 
then sum and check wether it is odd or not if odd then magical number

*/

#include<bits/stdc++.h>
using namespace std;
// 2nd method count no.of 0 if 0 is odd so answer is odd else even 
bool ismagical(int n){
    vector<int>arr;
    while(n>0){
        int bit = n%2;
        arr.push_back(bit);
        n/=2;
    }

    for(int i = 0 ;i<arr.size();i++){
            if(arr[i]==0) arr[i] =1;
            else arr[i]=2;
    }

    int sum =0;
    for(int i = 0 ;i<arr.size();i++){
        sum+=arr[i];
    }
return (sum%2)!=0;
}

int main(){
    int n ; cin>>n;
    int c=0;
    for(int i = 1;i<=n;i++){
        if(ismagical(i)){
            c++;
        }
    }

    cout<<c;
}