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
    bool isSameTree(TreeNode* p, TreeNode* q) {
      if(p == NULL && q== NULL) return true;
      if(p == NULL || q== NULL) return false;
      queue <TreeNode *> q1;
      queue <TreeNode *> q2;
      q1.push(p);
      q2.push(q);

      while(!q1.empty() || !q2.empty()){
        int l1=q1.size();
        int l2=q2.size();
        if(l1!=l2) return false;
        printf("%d %d\n",l1,l2);
        while(l1){
        TreeNode *curr1= q1.front(); q1.pop();
        TreeNode *curr2= q2.front();q2.pop();
        if ((curr1 == NULL && curr2 != NULL) || (curr1 != NULL && curr2 == NULL)) 
                    return false;
        printf("%d %d--",curr1-> val,curr2-> val);
        if(curr1-> val != curr2->val){
             return false;
        }
        if (curr1 && curr2) {
                    if ((curr1->left && !curr2->left) || (!curr1->left && curr2->left)) return false;
                    if ((curr1->right && !curr2->right) || (!curr1->right && curr2->right)) return false;

                    if (curr1->left) q1.push(curr1->left);
                    if (curr2->left) q2.push(curr2->left);
                    if (curr1->right) q1.push(curr1->right);
                    if (curr2->right) q2.push(curr2->right);
                }
        l1--;
        }

      }
      return q1.empty() && q2.empty();
    }
};