#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> name;
    vector<int> age;
    vector<int> m;
    
    int t;
    cin >> t;
    cin.ignore();
    
    for(int i = 0; i < t; i++) {
        string s;
        getline(cin, s);  
        s += ",";  
        
        string st = "";  
        int c = 1;  
        
        for(int j = 0; j < s.size(); j++) {
            if(s[j] != ',') {
                st += s[j];  
            } else {
                if(c == 1) {
                    name.push_back(st);  
                } else if(c == 2) {
                    age.push_back(stoi(st));  
                } else if(c == 3) {
                    m.push_back(stoi(st));  
                }
                c++;  
                st = "";  
            }
        }
    }

  
    for (int i = 0; i < t; i++) {
        cout << "Name: " << name[i] << ", Age: " << age[i] << ", Marks: " << m[i] << endl;
    }

    return 0;
}
