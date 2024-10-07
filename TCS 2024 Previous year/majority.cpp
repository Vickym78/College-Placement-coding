#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    string t=""; 
    for(int i =1 ;i<str.size()-1;i++){
        if(str[i]==',') str[i] = ' ';
        t+=str[i];
    }
    // 3 2 3 3
    cout<<t<<endl;
 
    stringstream ss(t);
    int n; 
    vector<int>arr;
    while(ss>>n){
        arr.push_back(n);
    }

    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // majity algo
    vector<int>count(100,0);
    for(int i = 0 ; i<arr.size();i++){
        count[arr[i]]++;
    }
    int majoritycount= arr.size()/3;
    for(int i =0;i<count.size();i++){
        if(count[i]>majoritycount) cout<<i;
    }
}