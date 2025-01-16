//Find the majority element in an array. A majority element is an element that appears more than n/2 times where n is the size of the array.
#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();

    sort(nums.begin(), nums.end());

    return nums[ n/2];
}

int main(){
    vector<int> nums = {2,2,1,1,1,2,2};

    cout << majorityElement(nums) << endl;
}

//Output: 2

//Approach: Sort the array and return the element at n/2 index. Since the majority element appears more than n/2 times, it will be the element at n/2 index.
//Time Complexity: O(nlogn) where n is the size of the array. Sorting takes O(nlogn) time.