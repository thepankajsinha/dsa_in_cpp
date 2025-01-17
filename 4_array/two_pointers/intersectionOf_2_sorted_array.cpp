//Intersection of 2 sorted arrays
#include <bits/stdc++.h>
using namespace std;

vector<int> findIntersection(vector<int> &a, vector<int> &b) {

    int i = 0;
    int j = 0;

    int n = a.size();
    int m = b.size();

    vector<int> ans;

    while(i < n && i < m){
        if(a[i]==b[j]){
            ans.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i] > b[j]){
            j++;
        }
        else if(a[i] < b[j]){
            i++;
        }
    }

    return ans;
}

int main(){
    vector<int> a = {1, 2, 3, 4, 5};

    vector<int> b = {1, 2, 3};

    vector<int> ans = findIntersection(a, b);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

//Output: 1 2 3

//Approach: We will use 2 pointers to iterate over the 2 arrays. If the elements at the 2 pointers are equal, we will push the element in the answer vector and increment both the pointers. If the element at the first pointer is greater than the element at the second pointer, we will increment the second pointer and vice versa. We will continue this process until we reach the end of any of the arrays.

//Time Complexity: O(n+m)