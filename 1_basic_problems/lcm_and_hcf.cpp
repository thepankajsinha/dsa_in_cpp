// Input: a = 5 , b = 10
// Output: [10, 5]
// Explanation: LCM of 5 and 10 is 10, while their GCD is 5.

#include <bits/stdc++.h>
using namespace std;

 vector<int> lcmAndHcf(int a, int b) {
    int smallNo = min(a, b);
        
    int hcf = 0;
        
    for(int i = 1; i<= smallNo; i++){
            
        if(a % i == 0 && b % i == 0){
            hcf = i;
        }
    }
        
    int lcm = (a * b)/hcf;
        
    vector<int> ans;
        
    ans.push_back(lcm);
    ans.push_back(hcf);
        
    return ans;
}
    
int main(){

    int a = 4;
    int b = 6;

    vector<int> ans = lcmAndHcf(a, b);
    cout << "LCM: " << ans[0] << endl;
    cout << "HCF: " << ans[1] << endl;
}

// LCM: 12
// HCF: 2

// Time Complexity: O(min(a, b))
// Space Complexity: O(1)