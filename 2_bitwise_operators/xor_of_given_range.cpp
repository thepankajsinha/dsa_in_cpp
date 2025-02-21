#include <bits/stdc++.h>
using namespace std;

int getXor(vector<int> &nums, int a, int b)
{
    // Code here
    int xorAll = 0;

    for (int i = a; i <= b; i++)
    {
        xorAll = xorAll ^ nums[i];
    }

    return xorAll;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int a = 1, b = 3;
    cout << getXor(nums, a, b) << endl;
}

// Output: 7
// Time Complexity: O(N)