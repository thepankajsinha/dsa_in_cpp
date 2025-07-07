// Input: n = 7, arr[] = {2, 2, 5, 5, 20, 30, 30}
// Output: 20
// Explanation: Since 20 occurs once, while other numbers occur twice, 20 is the answer.

#include <bits/stdc++.h>
using namespace std;

int search(int n, int arr[]) {
    int ans = 0;
        
    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int n = 7;
    int arr[] = {2, 2, 5, 5, 20, 30, 30};
    cout << search(n, arr) << endl;
}

//Output: 20

// Time Complexity: O(n)