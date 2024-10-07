#include<bits/stdc++.h>
using namespace std;

int main(){
    string str; 
    getline(cin ,str ); 
    stringstream s(str);
    vector<int>arr;
    int number;
    while(s>>number){
        arr.push_back(number);
    }

    // unique lement
    unordered_map<int,int>mpp;
    for(int i = 0;i<arr.size();i++){
        mpp[arr[i]]++;
    }
    int sum = 0 ;
    for(auto it : mpp){
        if(it.second==1){
            sum+=it.first;
        }
    }

    cout<<sum;
}