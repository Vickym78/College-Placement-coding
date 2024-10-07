#include<bits/stdc++.h>
using namespace std; 

int main(){
        string str; 
        getline(cin, str);

       string t; 
       for(int i =1; i<str.length()-1; i++){
            if(str[i]==',') str[i] = ' ';
            t+=str[i];
       }

       istringstream ss(t); 
       int val; vector<int>arr;
       while(ss>>val){
        arr.push_back(val);
       }

       for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
       }

          cout << endl;

    // Finding and printing subarrays with sum 0
    cout << "Subarrays with sum 0:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        int sum = 0; 
        for (int j = i; j < arr.size(); j++) {
            sum += arr[j];
            if (sum == 0) {
                cout << '[';
                for (int k = i; k <= j; k++) {
                    if (k != i) cout << ", ";
                    cout << arr[k];
                }
                cout << ']' << endl;
            }
        }
    }
    return 0;
}
