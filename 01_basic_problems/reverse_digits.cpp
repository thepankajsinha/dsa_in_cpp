// Input: n = 12345 
// Output: 54321
// Explanation: The output “54321” for the input num = 12345 represents the number reversed from its original order. 

#include <bits/stdc++.h>
using namespace std;

int reverseDigits(int n) {
    int reverseDigit = 0;
      
    while(n != 0){         
        int lastDigit = n % 10;

        if(lastDigit != 0 || reverseDigit != 0){      
            reverseDigit = (reverseDigit * 10) + lastDigit;
        }
            
        n = n / 10;
    }       
    return reverseDigit;
}
    
int main(){
    int n = 123;
    cout << reverseDigits(n) << endl;
}

//Output: 321

// Time Complexity: O(log(n))
// Space Complexity: O(1)