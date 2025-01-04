/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void path(struct TreeNode* root,int rs, int* ans){
    if(root == NULL) return ;
    if(!root -> left && !root->right){
       *ans=*ans+rs*10+root->val;
    }
    path(root->left,rs*10+root->val,ans);
    path(root->right,rs*10+root->val,ans);
}

int sumNumbers(struct TreeNode* root) {
    int ans=0;
    path(root,0,&ans);
    return ans;
}