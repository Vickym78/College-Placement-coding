#include<bits/stdc++.h>
using namespace std; 

int main(){
    string day; getline(cin, day); int n ; cin>>n;
    int curr_day ;
    if(day == "mon") curr_day = 1;
    else if(day == "tue") curr_day = 2;
    else if(day == "wed") curr_day = 3;
    else if(day == "thu") curr_day = 4;
    else if(day == "fri") curr_day = 5;
    else if(day == "sat") curr_day = 6;
    else curr_day = 7;
        int ans = 0;
    int today = 7 - curr_day;
    int remaining_day = (n-today);
    if(remaining_day < 0) {cout<<0; return 0;}
    else{
            ans = remaining_day/7;
            cout<<ans+1;
    }
    
}