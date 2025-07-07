// Input: num = 1248
// Output: 4
// Explanation: 1248 is divisible by all of its digits, hence the answer is 4.

#include <bits/stdc++.h>
using namespace std;

int countDigits(int n) {
        int count = 0;
        int originalNumber = n;
        
    while(n != 0){
            
        int lastDigit = n % 10;
            
        if(lastDigit == 0){
                
        }
        else if(originalNumber % lastDigit == 0 ){
            count++;
        }
              
        n = n / 10;
    }
    return count;
}
    
int main(){
    int num = 1248;
    cout << countDigits(num) << endl;
}

//Output: 4

// Time Complexity: O(log(n))
// Space Complexity: O(1)