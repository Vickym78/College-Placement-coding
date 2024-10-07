#include<bits/stdc++.h>
using namespace std; 

int main(){
    string str; 
    getline(cin, str);
    stringstream s(str);
    int number; vector<int>v;
    while(s>>number){
        v.push_back(number);
    }

    // maxsum subarray
    int sum  = v[0] , maxsum=sum;
    
    for(int i =1;i<v.size();i++){
        sum+=v[i];
        maxsum = max(maxsum, sum);
        if(sum<0) sum=0;

    }

    cout<<maxsum;
}