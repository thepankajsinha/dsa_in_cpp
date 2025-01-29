#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int> &nums){
    int n = nums.size();

    int start = 1;
    int end = n - 2;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1])
        {
            return mid;
        }
        else if (nums[mid] > nums[mid - 1])
        {
            start = mid + 1;
        }
        else if (nums[mid] > nums[mid + 1])
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {0, 1, 0};
    cout << peakIndexInMountainArray(nums) << endl;
}

// Output: 1

// Time Complexity: O(log(n))
// Space Complexity: O(1)