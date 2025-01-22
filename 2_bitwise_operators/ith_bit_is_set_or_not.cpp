// Input: n = 4, k = 2
// Output: true
// Explanation: Binary representation of 4 is 100, in which 2nd index bit from LSB is set. So, return true.
#include <bits/stdc++.h>
using namespace std;

bool checkKthBit(int n, int k) {
    return n & (1<<k);
}

int main() {
    int n = 4, k = 2;
    cout << checkKthBit(n, k) << endl;
}

//Output: 1

//Time complexity: O(1)