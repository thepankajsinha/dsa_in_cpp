#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
class Node{
public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};


// Function to reverse a linked list
Node *reverseList(Node *head)
{
    // code here
    vector<int> items;

    Node *temp = head;
    while (temp != NULL)
    {
        items.push_back(temp->data);
        temp = temp->next;
    }

    int i = items.size() - 1;
    temp = head;
    while (temp != NULL)
    {
        temp->data = items[i];
        i--;
        temp = temp->next;
    }

    return head;
}

// Function to print linked list
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original List: ";
    printList(head);

    head = reverseList(head);

    cout << "Reversed List: ";
    printList(head);

}

// Original List : 1 2 3 4 5 
// Reversed List : 5 4 3 2 1

    // Time Complexity: O(N)