// Input: n = 6
// Output: true 
// Explanation: Factors of 6 are 1, 2, 3 and 6. Excluding 6 their sum is 6 which is equal to N itself. So, it's a Perfect Number.

#include <bits/stdc++.h>
using namespace std;

bool checkPerfectNumber(int n) {
    int sum = 1;
        
    for(int i = 2; i< sqrt(n); i++){
        if(n % i == 0){
            sum = sum + i + n/i;
        }
    }
        
    if(n == sum){
        return true;
    }else{
        return false;
    }
}
    
int main(){
    int n = 6;

    if(checkPerfectNumber(n)){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
}

//Output: True

// Time Complexity: O(sqrt(n))
// Space Complexity: O(1)