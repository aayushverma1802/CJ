// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data, TreeNode *left, TreeNode *right)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};
class Solution
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == nullptr or root == p or root == q)
        {
            return root;
        }
        TreeNode *temp_l = lowestCommonAncestor(root->left, p, q);
        TreeNode *temp_r = lowestCommonAncestor(root->right, p, q);
        if (temp_l == nullptr)
        {
            return temp_r;
        }
        if (temp_r == nullptr)
        {
            return temp_l;
        }
        else
        {
            return root;
        }
    }
};
int main()
{
    Solution *obj = new Solution();
    TreeNode *root, *p, *q;
    obj->lowestCommonAncestor(root, p, q);

    return 69;
}