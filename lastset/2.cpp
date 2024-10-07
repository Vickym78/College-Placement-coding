#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, size;
    cin>>n>>size;
    vector<int> v(n);
    vector<int> ans;
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    int i=0, j=0;
    set<int> s;
    while(j<v.size()) {
        s.insert(v[j]);
        if(j-i+1 == size) {
            ans.push_back(*s.rbegin());
            s.erase(v[i]);
            i++;
        }
        j++;
    }
    for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
    }
    return 0;
}