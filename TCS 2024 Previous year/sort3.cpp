#include<bits/stdc++.h>
using namespace std;

int main(){
    string str; getline(cin, str);
    string temp = "";
     for(int i =1;i<str.size()-1;i++){
        if(str[i]==',')  str[i] = ' ';
        temp+=str[i]; //
     }

     stringstream ss(temp);
     int val;
     vector<int>v;
     while(ss>>val){
        v.push_back(val);
     }

     // 3 3 6 3 7 3 7
        int lo = 0 , mid = 0 , high = v.size()-1;
   while(mid<=high){
    if(v[mid]==3){
        swap (v[mid], v[lo]);  mid++;lo++;
    }
    else if(v[mid]==7){
        swap(v[high], v[mid]); high--;
    }
    else mid++;
   }
   for(int i =0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
    
}