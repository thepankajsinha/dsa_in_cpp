#include <bits/stdc++.h>
using namespace std;

int singleElement(int arr[], int N)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < N; i++)
    {
        mp[arr[i]]++;
    }

    for (auto i : mp)
    {
        if (i.second == 1)
        {
            return i.first;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 1, 4, 3};
    int N = sizeof(arr) / sizeof(arr[0]);
    cout << singleElement(arr, N) << endl;
}

// Output: 4
// Time Complexity: O(N)