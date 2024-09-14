#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    // Convert inputs to uppercase for case insensitivity
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    transform(t.begin(), t.end(), t.begin(), ::toupper);

    if (s == t) {
        cout << "INVALID OUTPUT" << endl;
        return 0;
    }

    int dis[8] = {800, 600, 750, 900, 1400, 1200, 1100, 1500};
    vector<string> src = {"TH", "GA", "IC", "HA", "TE", "LU", "NI", "CA"};

    int start = -1, end = -1;

    // Finding the indices of the source and destination in the src array
    for (int i = 0; i < 8; i++) {
        if (s == src[i]) start = i;
        if (t == src[i]) end = i;
    }

    // If either source or destination was not found, it's an invalid input
    if (start == -1 || end == -1) {
        cout << "INVALID OUTPUT" << endl;
        return 0;
    }

    int distance = 0;

    // Calculate distance based on the circular route
    if (start > end) {
        for (int i = start+1; i <=end; i++) {
            distance += dis[i];
        }
    } else {
        for (int i = end+1; i < 8; i++) {
            distance += dis[i];
        }
        for (int i = 0; i <=start ; i++) {
            distance += dis[i];
        }
    }


    // Calculate fare
    double fare = ceil((distance / 1000.0) * 5);

    // Output the result
    cout << fixed << setprecision(1) << fare << " INR" << endl;

    return 0;
}
