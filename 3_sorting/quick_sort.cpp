#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int> &arr, int start, int end)
{
    // code here
    if (start >= end)
    {
        return;
    }

    int pivot = partition(arr, start, end);
    quickSort(arr, start, pivot - 1);
    quickSort(arr, pivot + 1, end);
}

int partition(vector<int> &arr, int start, int end)
{
    // code here
    int pos = start;

    for (int i = start; i <= end; i++)
    {
        if (arr[i] <= arr[end])
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }

    return pos - 1;
}

int main() {
    vector<int> arr = {5, 4, 3, 2, 1};
    quickSort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

// Output: [1, 2, 3, 4, 5]
// Time Complexity: O(nlogn)