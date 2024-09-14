#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n ; cin>>n ; 
     int arr[n];
     for(int i =0;i<n;i++){
        cin>>arr[i];
     }

    // push at 0 at end  5 0 1 2 0 0 4 0 3 --> 5 1 2 4 3 0 0 0
    // first zero wala element
    int j = -1;
    for(int i = 0 ;i<n;i++){
        if(arr[i] == 0 ) {
            j= i ; 
            break;
        }
    }

    if(j==-1) cout<<"no zero is present";
    else{

        for(int i = j+1 ;i<n;i++){
            if(arr[i]!=0){
                swap(arr[i] ,arr[j]);
                j++;
            }
           
        }




    }

for(int i = 0 ;i<n;i++){
    cout<<arr[i]<<" ";
}

}