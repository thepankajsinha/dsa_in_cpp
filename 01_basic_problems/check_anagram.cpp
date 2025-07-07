// Input: s1 = "geeks", s2 = "kseeg"
// Output: true
// Explanation: Both the string have same characters with same frequency. So, they are anagrams.

#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(string& s1, string& s2) {
    if(s1.size() != s2.size()){
        return false;
    }
        
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
        
    if(s1 == s2){
        return true;
    }else{
        return false;
    }
}
    
int main(){
    string s1 = "geeks";
    string s2 = "kseeg";
    cout << checkAnagram(s1, s2) << endl;
}

//Output: 1

// Time Complexity: O(nlogn)
// Space Complexity: O(1)