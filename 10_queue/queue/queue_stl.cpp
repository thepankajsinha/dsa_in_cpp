#include <bits/stdc++.h>
using namespace std;

void display(queue<int> q){
    while(q.size() > 0){
        int x = q.front();
        cout << x << " ";
        q.pop();
    }
    cout<<endl;
}


int main(){

    // Create a queue
    queue<int> q;

    // Insert elements into the queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    // Print the front element
    cout<<q.front()<<endl; //output: 1


    //print rear element
    cout<<q.back()<<endl; //output: 5
    

    // Print the size
    cout<<q.size()<<endl; //output: 5

    // Remove the element from the front
    q.pop(); 
    
    // Check if the queue is empty
    cout<<q.empty()<<endl; //output: 0

    // Display queue 
    display(q); //output: 2 3 4 5

}