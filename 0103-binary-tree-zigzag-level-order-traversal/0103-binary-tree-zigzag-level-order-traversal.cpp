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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
     vector<vector<int>> res;
        queue<TreeNode *>q;
        int flag=1;

        if(root == NULL) return res;
        q.push(root);

        while(!q.empty()){
            int size=q.size();
            vector<int> v;

            while(size!=0){
                TreeNode * curr = q.front();
                q.pop();
                v.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                size--;
            }
            if(flag== 0) reverse(v.begin(),v.end());
            flag=!flag;
            res.push_back(v);
        }

        return res;
    }
};