/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
vector<int>ans;
void inOrder(TreeNode *root,int l,int h)
{
    if(root==NULL){
        return;
    }inOrder(root->left,l,h);
    if(root->val>=l and root->val<=h){
        ans.push_back(root->val);
    }
    inOrder(root->right,l,h);
    

}    int rangeSumBST(TreeNode* root, int low, int high) {
        inOrder(root,low,high);
        int gg=0;
        for(auto x:ans){
            gg+=x;
        }
        return gg;
    }
};/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
vector<int>ans;
void inOrder(TreeNode *root,int l,int h)
{
    if(root==NULL){
        return;
    }inOrder(root->left,l,h);
    if(root->val>=l and root->val<=h){
        ans.push_back(root->val);
    }
    inOrder(root->right,l,h);
    

}    int rangeSumBST(TreeNode* root, int low, int high) {
        inOrder(root,low,high);
        int gg=0;
        for(auto x:ans){
            gg+=x;
        }
        return gg;
    }
};/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
vector<int>ans;
void inOrder(TreeNode *root,int l,int h)
{
    if(root==NULL){
        return;
    }inOrder(root->left,l,h);
    if(root->val>=l and root->val<=h){
        ans.push_back(root->val);
    }
    inOrder(root->right,l,h);
    

}    int rangeSumBST(TreeNode* root, int low, int high) {
        inOrder(root,low,high);
        int gg=0;
        for(auto x:ans){
            gg+=x;
        }
        return gg;
    }
};