class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        if(!root) return {};
        queue<TreeNode* >q;
        q.push(root);  //initiate a queue to traverse all the nodes of tree
        vector<vector<int>>ans; //ans
        while(!q.empty())
        {
             int n=q.size(); 
             vector<int>v;  // to store the values of each level
             for(int i=0;i<n;i++)
             {
                TreeNode* cur=q.front();
                q.pop();

                v.push_back(cur->val);
                if(cur->left) q.push(cur->left);  // if it has left go to left
                if(cur->right) q.push(cur->right); //// if it has left go to right
             }

             ans.push_back(v); //storing every level values here;
        } 
   
        return ans;

        // TC O(N) SC O(N)    
    }
};