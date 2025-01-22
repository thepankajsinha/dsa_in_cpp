#include <bits/stdc++.h>
using namespace std;

string reverseString(string& s) {
    int n = s.size();
        
    int start = 0;
    int end = n -1;
        
    while(start <= end){
        swap(s[start], s[end]);
        start++;
        end--;
    }
    return s;
}

int main(){
    string str = "Hello World!";
    cout << "Original String: " << str << endl;
    cout << "Reversed String: " << reverseString(str) << endl;
}

// output:
// Original String: Hello World!
// Reversed String: !dlroW olleH