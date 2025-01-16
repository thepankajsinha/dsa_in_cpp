//Find the missing number in the array of n numbers from 0 to n.
#include <bits/stdc++.h>
using namespace std;


int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;

    for(int i =0; i< n; i++){
        sum = sum + nums[i];
    }

    double missingNumber = (n*(n+1))/2 - sum;

    return missingNumber;
}


int main(){

    vector<int> nums = {3,0,1};
    cout<<missingNumber(nums);
}

//Output: 2

//Approach: We can find the missing number by calculating the sum of all the numbers in the array and then subtracting it from the sum of n natural numbers.
// Time Complexity: O(n)