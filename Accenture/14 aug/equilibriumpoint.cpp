#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    // pre and suff find wherer tht match they are apporiate
    int pre[n] ,suff[n];
    pre[0] = arr[0];  suff[n-1]=arr[n-1];
    for(int i=1 ; i<n;i++){
            pre[i]=pre[i-1]+arr[i];
    }

    for(int i = n-2 ;i>=0;i--){
        suff[i] = suff[i+1] + arr[i];
    }
    
for(int i = 0 ; i<n;i++){
    if(suff[i]==pre[i]) {
        cout<<arr[i]; return 0;
    }
}
cout<<"prefis: ";
for(int i = 0 ; i<n;i++){
    cout<<pre[i]<<" ";
}
cout<<endl;
cout<<"suffix : ";
for(int i = 0; i<n;i++){
    cout<<suff[i]<<" ";
}

 cout<<endl<<"ans: ";
for(int i = 0 ; i<n;i++){
    if(suff[i]==pre[i]) {
        cout<<arr[i]; return 0;
    }
}

cout<<-1; 
return 0;

}