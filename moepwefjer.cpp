#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
    vector<vector<int>>Lvl_O_Traverse(TreeNode *root,){
        if(root==NULL){
            return {};
        }
        vector<vector<int>>ans;
        queue<int>q;
        q.push(root);
        while(q.empty()==false){
            int n=q.size();
            v.clear();
            while(size!=0){
                TreeNode *temp=q.front();
                q.pop();
                int node=temp->val;
                v.push_back(node);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);

                }
                n--;
            }
            ans.push_back(v);

        }
        return ans;
    }
}
int main(){
    return 69;
}