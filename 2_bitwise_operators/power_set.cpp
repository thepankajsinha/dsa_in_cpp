// Input : 
// s = "abc"
// Output: 
// a ab abc ac b bc c
// Explanation : 
// There are a total 7 number of subsequences possible for the given string, and they are mentioned above in lexicographically sorted order.

#include <bits/stdc++.h>
using namespace std;

vector<string> AllPossibleStrings(string s){
    int n = s.size();

    int noOfSubsets = pow(2, n);

    vector<string> ans;

    for (int i = 1; i < noOfSubsets; i++){
        int x = i;
        int j = 0;
        string c = "";
        while (x != 0){
            if ((x & 1) == 1){
                c = c + s[j];
            }
            x = x >> 1;
            j++;
        }
        ans.push_back(c);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    string s = "abc";
    vector<string> ans = AllPossibleStrings(s);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
}

// Output: a ab abc ac b bc c

// Time Complexity: O(2^n * n)