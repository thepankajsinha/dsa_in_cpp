#include <bits/stdc++.h>
using namespace std;

vector<int> mergeSortedArray(vector<int> nums1, vector<int> nums2){
    int n = nums1.size();
    int m = nums2.size();

    vector<int> ans(n+m);

    int i = 0;
    int j = 0;
    int k = 0;

    while(i<n && j < m){
        if(nums1[i] < nums2[j]){
            ans[k] = nums1[i];
            i++;
            k++;
        }else{
            ans[k] = nums2[j];
            j++;
            k++;
        }
    }

    while(i < n){
        ans[k] = nums1[i];
        i++;
        k++;
    }

    while(j < m){
        ans[k]= nums2[j];
        j++;
        k++;
    }
    return ans;
}

int main(){
    vector<int> nums1 = {1, 3, 5, 7};
    vector<int> nums2 = {2, 4, 6, 8};

    vector<int> ans = mergeSortedArray(nums1, nums2);

    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

//Output: 1 2 3 4 5 6 7 8

//Approach: Two pointers
//Time Complexity: O(n+m)