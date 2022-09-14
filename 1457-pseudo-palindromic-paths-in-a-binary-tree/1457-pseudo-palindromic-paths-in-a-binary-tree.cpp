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
    int ans = 0;
    bool isPalindrome(vector<bool>& counter){
        int numOdds = 0;
        for(int i=0; i<10; i++){
            if (counter[i]){
                numOdds++;
            }
        }
        return numOdds <= 1;
    }
    void helper(TreeNode* root, vector<bool>& counter){
        if (root == NULL){
            return;
        }
        counter[root->val] = !counter[root->val];
        if (root->left == NULL && root->right == NULL){
            if (isPalindrome(counter)){
                ans++;
            }
            counter[root->val] = !counter[root->val];
            return;
        }
        helper(root->left, counter);
        helper(root->right, counter);
        counter[root->val] = !counter[root->val];
        
    }
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<bool> counter(10, false);
        ans = 0;
        helper(root, counter);
        return ans;
    }
};