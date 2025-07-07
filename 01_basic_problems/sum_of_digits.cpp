// Input: n = 687
// Output: 21
// Explanation: The sum of its digits are: 6 + 8 + 7 = 21


#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
        
    while(n != 0){
            
        int lastDigit = n % 10;
            
        sum = sum + lastDigit;
            
        n = n / 10;
    }    
        
    return sum;
}
    
int main(){
    int n = 687;
    cout << sumOfDigits(n) << endl;
}

//output: 21

// Time Complexity: O(log(n))
// Space Complexity: O(1)