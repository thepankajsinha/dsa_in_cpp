#include <bits/stdc++.h>
using namespace std;


class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node *arrToBST(vector<int> &nums, int start, int end)
{
    if (start > end)
    {
        return NULL;
    }

    int mid = (start + end) / 2;

    Node *root = new Node(nums[mid]);
    root->left = arrToBST(nums, start, mid - 1);
    root->right = arrToBST(nums, mid + 1, end);

    return root;
}

Node *sortedArrayToBST(vector<int> &nums){
    int start = 0;
    int end = nums.size() - 1;

    Node *root = arrToBST(nums, start, end);
    return root;
}
int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    Node *root = sortedArrayToBST(nums);
}