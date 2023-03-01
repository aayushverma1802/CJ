#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <functional>
using namespace std;
class Node
{
public:
    // Basic implementaion
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    void inorder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
    Node *insert(Node *root, int n)
    {

        if (root == NULL)
        {
            root = new Node(n);
            return root;
        }
        else if (root->data < n)
        {
            root->right = insert(root->right, n);
        }
        else
        {
            root->left = insert(root->left, n);
        }
        return root;
    }
};
int main()
{
    Node *n = NULL;
    n=n->insert(n, 14);
    n=n->insert(n, 90);
    n=n->insert(n, 5);
    n->inorder(n);

    return 0;
}