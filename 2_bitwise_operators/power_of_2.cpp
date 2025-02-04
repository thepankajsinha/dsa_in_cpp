// Input: n = 8
// Output: true
// Explanation: 8 is equal to 2 raised to 3 (23 = 8).

#include <bits/stdc++.h>
using namespace std;


bool isPowerofTwo(int n) {
    if(n==0) return false;
        
    return ((n & (n-1))==0);

}

int main(){
    int n = 8;
    cout << isPowerofTwo(n) << endl;
}

// Output: 1

// Time Complexity: O(1)