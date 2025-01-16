// Input: A = 10, B = 3, C = 2
// Output: 10
// Explanation:
// 10 is the greatest among the three.

#include <bits/stdc++.h>
using namespace std;

int greatestOfThree(int A, int B, int C) {
    int ans;
        
    if(A > B && A > C){
        ans = A;
    }
    else if(B > C){
        ans = B;
    }else{
        ans = C;
    }
        
    return ans;
}

int main(){
    int A = 10, B = 15, C = 5;
    cout << "The greatest of " << A << ", " << B << " and " << C << " is: " << greatestOfThree(A, B, C);
}

//Output: The greatest of 15, 10 and 5 is: 15

//Time Complexity: O(1)
//Space Complexity: O(1)