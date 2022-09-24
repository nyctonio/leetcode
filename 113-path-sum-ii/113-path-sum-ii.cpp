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
    void solve(TreeNode* root,int t,int sum,vector<vector<int>>&ans,vector<int> temp)
    {
        
       if(root==NULL)
            return;  
        
        sum+=root->val;
        temp.push_back(root->val);
        
        if(sum==t and root->left==NULL and root->right==NULL){
            ans.push_back(temp);
            return;
        }
        
        
        solve(root->left,t,sum,ans,temp);
        solve(root->right,t,sum,ans,temp);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        vector<int> temp;
        solve(root,targetSum,0,ans,temp);
        return ans;
    }
};