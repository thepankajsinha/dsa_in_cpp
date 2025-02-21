#include <bits/stdc++.h>
using namespace std;

queue<int> reverseFirstKElement(queue<int> q, int k)
{
    stack<int> st;

    //push first k element in stack
    for (int i = 0; i < k; i++)
    {
        int x = q.front();
        st.push(x);
        q.pop();
    }

    //push element from stack to queue
    //so that first k element will be reversed
    while (st.size() > 0)
    {
        int x = st.top();
        q.push(x);
        st.pop();
    }

    //push remaining element in queue
    //so that reversed k element will be at front
    int remainRlement = q.size() - k;
    while (remainRlement > 0)
    {
        int x = q.front();
        q.push(x);
        q.pop();

        remainRlement--;
    }

    return q;
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);


    int k = 3;
    q = reverseFirstKElement(q, k);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    //Output: 30 20 10 40 50
}