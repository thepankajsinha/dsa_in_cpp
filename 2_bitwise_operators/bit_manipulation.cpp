#include <bits/stdc++.h>
using namespace std;

int getBit(int n, int pos) {
    return (n & (1 << pos) != 0); ;
}

int setBit(int n, int pos) {
    return (n | (1 << pos));
}

int clearBit(int n, int pos) {
    int mask = ~(1 << pos);
    return (n & mask);
}

int main() {
    cout << getBit(70, 3) << endl;
    cout << setBit(70, 3) << endl;
    cout << clearBit(70, 3) << endl;
}

// Output
// 0 78 70

// Time Complexity: O(1)