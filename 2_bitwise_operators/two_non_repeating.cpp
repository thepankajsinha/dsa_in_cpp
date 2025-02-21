#include <bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int> &arr)
{
    // Code here.
    vector<int> ans;
    int xorAll = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        xorAll = xorAll ^ arr[i];
    }
    int tempxor = xorAll;

    // find the set bit position in the xorAll
    int setBit = 0;
    int pos = 0;

    while ((xorAll & 1) == 0)
    {
        setBit = xorAll & 1;
        pos++;
        xorAll = xorAll >> 1;
    }

    //
    int newXorAll = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if ((arr[i] & (1 << pos)) != 0)
        {
            newXorAll = newXorAll ^ arr[i];
        }
    }

    int firstNum = newXorAll;
    int secondNum = tempxor ^ newXorAll;

    // push number in increasing order
    if (firstNum > secondNum)
    {
        swap(firstNum, secondNum);
    }

    ans.push_back(firstNum);
    ans.push_back(secondNum);

    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 1, 4};
    vector<int> ans = singleNumber(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

// Output: 3 4
// Time Complexity: O(n)