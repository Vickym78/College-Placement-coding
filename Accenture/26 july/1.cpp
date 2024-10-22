#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; 
    cin>>n;

    // convert into binary;
    int count = 0 ; 
    vector<int>bin;
    while(n>0){
        int bit = n%2;
        if(bit==1) count++;
        bin.push_back(bit);
        n/=2;
    }
    /*
    reverse(bin.begin(),bin.end());
    for(int i = 0 ;i<bin.size();i++){
        cout<<bin[i];
    }
    cout<<endl<<count;
    */
   // find min value after tranfer
   cout<<pow(2,count) -1;

    return 0;

}