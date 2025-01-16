#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if(n==0 || n==1){
        return 1;
    }
        
    int ans = 1;     
    for(int i =1; i<=n; i++){
        ans = ans * i;
    }
        
    return ans;
}

int main(){
    int n = 5;
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;
}

//Output: Factorial of 5 is: 120
// Time Complexity: O(n)
// Space Complexity: O(1)
