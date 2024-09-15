#include<bits/stdc++.h>
using namespace std;

// Brute force approach
void bruteforce(vector<int> v, int target) {
    int n = v.size();
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(v[i] + v[j] == target) 
                cout << i << " " << j << endl;
        }
    }
}

void better(vector<int> &v, int target) {
    sort(v.begin(), v.end());  // Sort the array
    int n = v.size();
    int i = 0, j = n - 1;

    while(i < j) {
        int sum = v[i] + v[j];
        if(sum == target) {
            cout << i << " " << j << endl;
            i++; j--;
        }
        else if(sum > target) {
            j--;
        } else {
            i++;
        }
    }
}

int main() {
    int n; 
    cin >> n; 
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int target = 9;
    //bruteforce(v, target);
    better(v, target);
}
