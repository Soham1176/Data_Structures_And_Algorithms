// code link :https://leetcode.com/problems/count-complete-tree-nodes/submissions/896459227/
// refer on : https://www.youtube.com/watch?v=u-yWemKGWO0&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=33&ab_channel=takeUforward
#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};
struct TreeNode *NewNode(int data)
{
    struct TreeNode *Node = new TreeNode;
    Node->data = data;
    Node->left = Node->right = NULL;
    return (Node);
}

class Solution{
        void markParents(TreeNode* root,unordered_map<TreeNode*,TreeNode*> & parent_track,TreeNode* target)
        {
            queue<TreeNode*> q;
            q.push(root);
            while (!q.empty())
            {
                TreeNode* cur = q.front();
                q.pop();

                if(cur -> left){
                    parent_track[cur -> left] = cur;
                    q.push(cur -> left);
                }

                if(cur -> right)
                {
                    parent_track[cur -> right] = cur;
                    q.push(cur -> right);
                }
            }
            
        }

    public:
    vector<int> distance(TreeNode* root,TreeNode* target,int k)
    {
        // node -> parent
        unordered_map<TreeNode*,TreeNode*> parent_track;

        markParents(root,parent_track,target);

        unordered_map<TreeNode*,bool> visited;
        queue<TreeNode*> q;
        q.push(target);
        visited[target] = true;
        int dist = 0;
        while (!q.empty())
        {
            int size = q.size();
            if(dist == k) break;
            dist++;

            for (int i = 0; i < size; i++)
            {
                TreeNode* cur = q.front();
                q.pop();
                if(cur -> left && !visited[cur->left])
                {
                    q.push(cur->left);
                    visited[cur -> left] = true;
                }
                if(cur -> right && !visited[cur->right])
                {
                    q.push(cur->right);
                    visited[cur -> right] = true;
                }
                if(parent_track[cur] && !visited[parent_track[cur]])
                {
                    q.push(parent_track[cur]);
                    visited[parent_track[cur]] = true;
                }
            }
            
        }
        vector<int> result;
        while (!q.empty())
        {
            TreeNode* cur = q.front();
            q.pop();
            result.push_back(cur -> data);
        }
        return result;
    }

};

int main()
{
    struct TreeNode *root = NewNode(1);
    root->left = NewNode(2);
    root->right = NewNode(3);
    root->left->left = NewNode(7);
    root->left->right = NewNode(9);
    root->left->left->left = NewNode(13);
    root->left->left->left->right = NewNode(14);
    root->right->left = NewNode(10);
    root->right->right = NewNode(12);
    root->right->right->left = NewNode(15);
    root->right->right->left->left = NewNode(17);
    
    return 0;
}