#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n; 
    vector<string>name(n);
    vector<int>age(n);
     vector<char>grade(n);
      vector<string>gender(n);
    for(int i = 0 ;i<n;i++){
            cin>>name[i];
            cin>>age[i];
            cin>>grade[i];
            cin>>gender[i];
    }
        double sum = 0 ;
    for(int  i = 0;i<n;i++){
        if(age[i]>20) cout<<name[i]<<" ";
            sum+=(grade[i]-'A'+65);
    }

    cout<<endl;
    cout<<sum/4;



}