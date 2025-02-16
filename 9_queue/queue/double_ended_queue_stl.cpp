// Deque -> Double ended queue -> push and pop at both ends
#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;

    // Insert elements at the front and back
    dq.push_front(10); // 10
    dq.push_back(20);  // 10 20
    dq.push_front(30); // 30 10 20
    dq.push_back(40);  // 30 10 20 40



    // Print deque elements
    cout << "Initial deque: ";
    for (int i = 0; i < dq.size(); i++){
        cout << dq[i] << " ";
    }
    cout << endl;
    // Initial deque: 30 10 20 40



    // Remove elements from the front and back
    dq.pop_front(); // 10 20 40
    dq.pop_back();  // 10 20



    // Print updated deque elements
    cout << "Updated deque: ";
    for (int i = 0; i < dq.size(); ++i){
        cout << dq[i] << " ";
    }
    cout << endl;
    // Updated deque: 10 20



    // Access elements at the front
    cout << dq.front() << endl; //output: 10



    // Access elements at the back
    cout << dq.back() << endl; //output: 20

    

    // size of deque
    cout << dq.size(); //output: 2
}