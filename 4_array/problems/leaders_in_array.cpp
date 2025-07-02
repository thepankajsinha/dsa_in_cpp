// Description: Given an array of integers, find all the leaders in the array. An element is considered as a leader if it is greater than or equal to all the elements to its right side.
#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
        
    int currLeader = INT_MIN;
        
    vector<int> ans;
        
    for(int i = n-1; i>=0; i--){
        if(arr[i] >= currLeader){
            ans.push_back(arr[i]);
        }
        currLeader = max(currLeader, arr[i]);
    }
        
    reverse(ans.begin(), ans.end());
        
    return ans;
}


int main(){
    vector<int> arr = {3, 3, 4, 2, 4, 4, 2, 4, 4};

    vector<int> ans = leaders(arr);

    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

//Output: 4 4 4 4 4 

//Approach: Traverse the array from right to left and keep track of the current leader. If the current element is greater than or equal to the current leader, then it is a leader.
//Time Complexity: O(n)