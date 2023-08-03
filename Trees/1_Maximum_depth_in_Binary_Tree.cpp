/*
leetcode Questio : https://leetcode.com/problems/maximum-depth-of-binary-tree/
refernce for :https://takeuforward.org/data-structure/maximum-depth-of-a-binary-tree/
int maxDepth(TreeNode* root)
{
    if (root == NULL)
    {
        retunr 0;
    }

    int leftnode_height = maxDepth(root -> left);
    int rightnode_height = maxDepth(root -> right);

    return (1 + max(leftnode_height,rightnode_height))
    
}
*/