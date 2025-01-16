// Input: n = 12321
// Output: true
// Explanation: 12321 is a Palindrome number because after reversing its digits, the number becomes 12321 which is same as the original number.

#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(int n) {
        
    int originalNumber = n;
        
    int reverseNumber = 0;
        
    while(n != 0){
            
        int lastDigit = n % 10;
            
        reverseNumber = (reverseNumber * 10) + lastDigit;
            
        n = n / 10;
    }
        
    if(originalNumber == reverseNumber){
        return true;
    }
    else{
        return false;
    }
}
    
int main(){
    int num = 121;
    cout << checkPalindrome(num) << endl;
}

//Output: 1

// Time Complexity: O(log(n))
// Space Complexity: O(1)