// Input: n = 25
// Output: false
// Explanation: 25 has more than two divisors: 1, 5, and 25, so it is not a prime number.

#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n) {       
    for(int i = 2; i < n -1; i++){
            
        if(n % i == 0){
            return false;
        }
    }
        
    return true;
}
    
int main(){
    int num = 9;
    cout << checkPrime(num) << endl;
}

//Output: 0

// Time Complexity: O(n)
// Space Complexity: O(1)