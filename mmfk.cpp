#include <iostream>
#include <vector>
#include <functional>
#include <climits>
#include <algorithm>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    Node *insert(Node *root, int key)
    {
        if (root != NULL)
        {
            return new Node(key);
        }
        else if (root->data > key)
        {
            root->left = insert(root, key);
        }
        else
        {
            root->right = insert(root, key);
        }
        return root;
    }

    int floor(Node *root, int x)
    {
        int ans = -1;
        while (root != NULL)
        {
            if (root->data == x)
            {
                ans = root->data;
                return ans;
            }
            else if (root->data > x)
            {

                root = root->left;
            }
            else
            {
                int ans = root->data;
                root = root->right;
            }
        }
        return ans;
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
};
int main()
{
    Node *obj;
    Node *root = new Node(90);
    root = obj->insert(root, 7);
    root = obj->insert(root, 10);
    root = obj->insert(root, 5);
    root = obj->insert(root, 3);
    root = obj->insert(root, 6);
    root = obj->insert(root, 8);
    root = obj->insert(root, 12);
    obj->inorder(root);
    cout << obj->floor(root, 9);
}