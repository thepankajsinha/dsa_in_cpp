// Input: n = 8
// Output: 1
// Explanation: Binary representation is '1000', so the count of the set bit is 1.

#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n) {
    int count = 0;
        
    while(n != 0){
        int lastBit = n & 1;
            
        if(lastBit == 1) count++;
            
        n = n >> 1;
    }
    return count;
}

int main(){
    int n = 8;
    cout << countSetBits(n) << endl;
}

// Output: 1

// Time Complexity: O(log(n))