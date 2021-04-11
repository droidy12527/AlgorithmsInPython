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
        deque<TreeNode*> q;
        vector<vector<int>> ans;
        bool zigzag = false;
        if(root) q.push_back(root);
        
        while(!q.empty()){
            int level_size = q.size();
            vector<int> level;
            if(zigzag){
                while(level_size-- > 0){
                TreeNode* cur = q.back(); q.pop_back();
                level.push_back(cur->val);
                if(cur->right) q.push_front(cur->right);
                if(cur->left) q.push_front(cur->left);
                }    
            }
            else{
                while(level_size-- > 0){
                TreeNode* cur = q.front(); q.pop_front(); 
                level.push_back(cur->val);
                if(cur->left) q.push_back(cur->left);
                if(cur->right) q.push_back(cur->right);
                }    
            }
            ans.push_back(level);
            zigzag = !zigzag;
        }
        return ans;
    }
};