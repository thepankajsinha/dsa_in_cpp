// Input: arr[] = [10, 20, 30, 40, 50]
// Output: true
// Explanation: The given array is sorted.

#include <bits/stdc++.h>
using namespace std;


bool arraySortedOrNot(vector<int>& arr) {
    for(int i=1; i<arr.size(); i++){
        if(arr[i-1] > arr[i]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << arraySortedOrNot(arr) << endl;
}

// Output: 1 (true)

// Time Complexity: O(n)