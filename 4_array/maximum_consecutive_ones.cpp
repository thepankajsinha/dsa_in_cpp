// Description: Given a binary array, find the maximum number of consecutive 1s in this array.
#include <bits/stdc++.h>
using namespace std;


int findMaxConsecutiveOnes(vector<int>& nums) {
        
    int n = nums.size();

    int maxOnes = 0;
    int count = 0;

    for(int i = 0; i < n ; i++){
        if(nums[i]==1){
            count++;
        }
        else{
            count = 0;
        }
        maxOnes = max(maxOnes, count);
    }

    return maxOnes;
}


int main(){

    vector<int> nums = {1,1,0,1,1,1};
    cout<<findMaxConsecutiveOnes(nums);
}


//Output: 3

//Approach: Traverse the array and keep track of the count of consecutive ones. If the current element is 1, increment the count, else reset the count to 0. Update the maximum count of consecutive ones.
//Time Complexity: O(N)