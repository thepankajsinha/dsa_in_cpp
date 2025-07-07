#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr)
{
    // code here

    int n = arr.size();

    for (int i = 1; i <= n - 1; i++)
    {
        int j = i;

        while (j >= 1)
        {
            if (arr[j] >= arr[j - 1])
            {
                break;
            }

            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
                j--;
            }
        }
    }
}


int main() {
    vector<int> arr = {5, 2, 9, 1, 5, 6};
    insertionSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

// Output: 1 2 5 5 6 9
// Time Complexity: O(n^2)