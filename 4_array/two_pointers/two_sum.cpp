// Input: arr[] = [1, 4, 45, 6, 10, 8], target = 16
// Output: true
// Explanation: arr[3] + arr[4] = 6 + 10 = 16.

#include <bits/stdc++.h>
using namespace std;

bool twoSum(vector<int>& arr, int target) {
    int n = arr.size();
        
    int start = 0;
    int end = n-1;
        
    sort(arr.begin(), arr.end());
        
    while(start < end){
        if(arr[start] + arr[end] == target){
            return true;
        }
        else if(arr[start] + arr[end] > target){
            end--;
        }
        else{
            start++;
        }
    }
        
    return false;
        
}


int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    cout << twoSum(arr, target) << endl;
}

//Output: 1

//Time Complexity: O(nlogn)