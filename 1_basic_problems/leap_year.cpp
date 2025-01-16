// Input: n = 4
// Output: true
// Explanation: 4 is not divisible by 100 and is divisible by 4 so its a leap year

#include <bits/stdc++.h>
using namespace std;

bool checkLeapYear(int n) {
    if(n % 4 == 0 && (n % 100 != 0 || n % 400 == 0)){
        return true;
    }else{
        return false;
    }
}
    
int main(){
    int num = 2100;
    cout << checkLeapYear(num) << endl;
}

//Output: 0

// Time Complexity: O(1)
// Space Complexity: O(1)
