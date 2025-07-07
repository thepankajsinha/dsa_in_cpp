// Input: n = 372
// Output: false
// Explanation: 372 is not an Armstrong number since 3*3*3 + 7*7*7 + 2*2*2 = 378

#include <bits/stdc++.h>
using namespace std;

bool checkArmstrongNumber(int n) {
    int originalNumber = n;
        
    int sum = 0;
        
    while(n != 0){
            
        int lastDigit = n % 10;
            
        sum = sum + pow(lastDigit, 3);
            
        n = n / 10;
    }
        
    if(originalNumber == sum){
        return true;
    }
    else{
        return false;
    }
}
    
int main(){
    int num = 372;
    cout << checkArmstrongNumber(num) << endl;
}

//Output: 0

// Time Complexity: O(log(n))
// Space Complexity: O(1)