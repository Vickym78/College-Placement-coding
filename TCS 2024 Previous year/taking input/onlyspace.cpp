// size not given
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str; 
    getline(cin,str);
    vector<int>arr;
    stringstream ss(str);
        int input; // if it is value
        while(ss>>input){
            arr.push_back(input);
        }

        for(int i =0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }


}
