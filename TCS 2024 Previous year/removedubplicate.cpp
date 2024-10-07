#include<bits/stdc++.h>
using namespace std;

int main(){
    string str; 
    getline(cin ,str);
    stringstream s(str);
    string val ; 
    set<string>arr;
    while(s>>val){
            arr.insert(val);
    }
vector<string> pal;


    for (auto it : arr) {
        cout << it << " ";  
        pal.push_back(it);   
    }
    cout<<endl;

    for(int i =pal.size()-1;i>=0;i--){
        cout<<pal[i];
        if(i!=0) cout<<" ";
    }

   
}