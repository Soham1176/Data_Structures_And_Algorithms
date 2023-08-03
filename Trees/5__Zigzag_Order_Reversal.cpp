/*
leetcode question :https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/
ref on :https://takeuforward.org/data-structure/zig-zag-traversal-of-binary-tree/
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if(root == NULL) return ans;

        queue<TreeNode*> q;
        q.push(root);

        bool LtoR = true;

        while(!q.empty())
        {
            int size = q.size();
            vector<int> v(size);
            for(int i=0;i<size;i++)
            {
                TreeNode* temp = q.front();
                q.pop();

                int index = (LtoR) ? i : (size-1-i);

                v[index] =(temp -> val);

                if(temp -> left != NULL) q.push(temp -> left);

                if(temp -> right != NULL) q.push(temp -> right);
            }
            LtoR = !LtoR;
            ans.push_back(v);
        }

        return ans;
    }
};*/