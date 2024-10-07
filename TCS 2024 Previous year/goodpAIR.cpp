#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

   
    const int MAX_SIZE = 10;
    vector<int> leftShoes(MAX_SIZE + 1, 0);
    vector<int> rightShoes(MAX_SIZE + 1, 0);

    for (int i = 0; i < N; ++i) {
        string shoeSize;
        cin >> shoeSize;
        int size = stoi(shoeSize.substr(0, shoeSize.size() - 1)); // Extract the size as integer
        if (shoeSize.back() == 'L') {
            leftShoes[size]++;
        } else {
            rightShoes[size]++;
        }
    }

    int pairs = 0;
    for (int size = 1; size <= MAX_SIZE; ++size) {
        pairs += min(leftShoes[size], rightShoes[size]);
    }

    cout << pairs << endl;
    return 0;
}
