#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
    public:
    Node* front;
    Node* back;

    Queue(){
        front = back = NULL;
    }

    bool isEmpty(){
        if(front == NULL) return true;
        else return false;
    }

    //inserting node at back
    void push(int val){ 
        
        //if queue is empty
        if (isEmpty()){
            front = new Node(val);
            back = front;
            return;
        }

        //if queue is not empty
        back->next = new Node(val);
        back = back->next;

    }

    //deleting node from front
    void pop(){ 

        //if queue is empty
        if(isEmpty()){
            cout<<"Queue is empty!"<<endl;
            return;
        }

        //if queue is not empty
        Node* temp = front;
        front = front->next;
        delete temp;
    }

    int getFront(){  //T.C -O(1)
        if(isEmpty()){
            cout<<"Queue is empty!"<<endl;
            return -1;
        }
        return front->data;
    }
};


int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.getFront()<<endl; //Output: 1
    q.pop();
    cout<<q.getFront()<<endl; //Output: 2
}