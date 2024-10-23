#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    float ans = 3.14*n*n;
    if(ans-int(ans)<=0.5){
            cout<<int(ans);
    }
    else{
        cout<<int(ans)+1;
    }
}