//Check if the array is sorted and rotated
#include <bits/stdc++.h>
using namespace std;

bool arrayIsSortedAndRotated(vector<int>& nums) {
        
    int n = nums.size();

    int count = 0;

    for(int i =1; i< n; i++){
        if(nums[i-1] > nums[i]){
            count++;
        }
    }

    if(nums[n-1] > nums[0]){
        count++;
    }

    if(count <= 1 ){
        return true;
    }else{
        return false;
    }
}

int main(){
    vector<int> nums = {3,4,5,1,2};
    cout << arrayIsSortedAndRotated(nums) << endl;
}

//Output: 1

//Approach: Traverse the array and check if the current element is greater than the next element. If it is, increment the count. Also, check if the last element is greater than the first element. If it is, increment the count. If the count is less than or equal to 1, return true. Else, return false.
// Time Complexity: O(n)