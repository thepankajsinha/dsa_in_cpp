//implement queue using two stack
#include <bits/stdc++.h>
using namespace std;

class myQueue{
    public:
    stack<int> s1;
    stack<int> s2;

    void push(int val){ //T.C -O(1)
        // use s1 for push operation
        s1.push(val);
    }


    int pop(){  //T.C -O(1)
        // use s2 for pop operation

        // if s1 and s2 stacks are empty
        if (s1.empty() && s2.empty())
        {
            return -1;
        }

        // if s2 is not empty
        if (s2.empty() == false)
        {
            int x = s2.top();
            s2.pop();
            return x;
        }

        // if s2 is empty
        if (s2.empty() == true)
        {
            while (s1.size() > 0)
            {
                int x = s1.top();
                s2.push(x);
                s1.pop();
            }
            int poppedElement = s2.top();
            s2.pop();
            return poppedElement;
        }
    }


    int returnFront(){ //T.C -O(1)
        // if s1 and s2 stacks are empty
        if (s1.empty() && s2.empty())
        {
            return -1;
        }
        return s2.top();
    }

};

int main(){
    myQueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.returnFront()<<endl;
} 
