#include <bits/stdc++.h>
using namespace std;

bool isAlphaNumeric(char ch){
    if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
        return true;
    }else{
        return false;
    }
}
    
    
bool sentencePalindrome(string &s) {
    int start = 0;
    int end = s.length()-1;
        
    while(start < end){
        if(!isAlphaNumeric(s[start])){
            start++;
            continue;
        }
            
        if(!isAlphaNumeric(s[end])){
            end--;
            continue;
        }
            
        if(tolower(s[start]) != tolower(s[end])){
            return false;
        }
            
        start++;
        end--;
    }
    return true;
}

int main(){
    string s = "Abc 012..## 10cbA";
    cout << sentencePalindrome(s) << endl;
}

//Output: 1

// Time Complexity: O(n)