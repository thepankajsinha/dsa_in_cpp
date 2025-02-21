#include <bits/stdc++.h>
using namespace std;


// 1's complement
string onesComplement(string S, int N)
{
    // code here
    string ans;

    for (int i = 0; i < N; i++)
    {
        if (S[i] == '0')
        {
            ans.push_back('1');
        }
        else
        {
            ans.push_back('0');
        }
    }
    return ans;
}


// 2's complement
string twosComplement(string bi)
{
    // code here
    int n = bi.size();

    int setBitIndex = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (bi[i] == '1')
        {
            setBitIndex = i;
            break;
        }
    }

    for (int i = 0; i < setBitIndex; i++)
    {
        if (bi[i] == '1')
        {
            bi[i] = '0';
        }
        else if (bi[i] == '0')
        {
            bi[i] = '1';
        }
    }
    return bi;
}

int main() {
    string s = "1100";
    int n = s.size();
    cout << onesComplement(s, n) << endl; // 0011
    cout << twosComplement(s) << endl; //0100
    return 0;
}


// Time Complexity: O(N)
