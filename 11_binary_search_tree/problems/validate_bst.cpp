#include <bits/stdc++.h>
using namespace std;


class Node {
public:
    int data;
    Node *left;
    Node *right;
    Node(int data){ 
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void inOrder(Node *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    inOrder(root->left, ans);
    ans.push_back(root->data);
    inOrder(root->right, ans);
}

bool isBST(Node *root)
{
    // Your code here
    vector<int> ans;
    inOrder(root, ans);

    // Check if the vector is sorted in ascending order
    for (int i = 0; i < ans.size() - 1; i++)
    {
        if (ans[i] > ans[i + 1])
            return false;
    }
    return true;
}

int main() {
    //       22
    //     /    \
    //   12      30
    //  /  \    /   \
    // 8   20  25   40

    Node *root = new Node(22);
    root->left = new Node(12);
    root->right = new Node(30);
    root->left->left = new Node(8);
    root->left->right = new Node(20);
    root->right->left = new Node(25);
    root->right->right = new Node(40);

    cout << isBST(root) << endl; //1
}