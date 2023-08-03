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

// Love Barobar

// class Solution {
// public:
//     TreeNode* MinVal(TreeNode* root)
//     {
//         TreeNode* temp = root;
//         while (temp -> left != NULL)
//         {
//             temp = temp -> left;
//         }
//         return temp;
    
//     }

//     TreeNode* deleteNode(TreeNode* root, int val) {
    
//     if(root == NULL) return root;
//     if(root -> val == val)
//     {
//         // 0 child
//         if(root -> left == NULL && root -> right == NULL)
//         {
//             delete root;
//             return NULL;
//         }
//         // 1 child
//         if(root -> left != NULL && root -> right == NULL)
//         {
//             // for left
//             TreeNode* temp = root -> left;
//             delete root;
//             return temp;
//         }
//         if(root -> left != NULL && root -> right == NULL)
//         {
//             // for right
//             TreeNode* temp = root -> right;
//             delete root;
//             return temp;
//         }

//         // 2 child
//         if (root -> left != NULL && root ->right != NULL )
//         {
//             int min_value = MinVal(root -> right) -> val;
//             root -> val = min_value;
//             root -> right =deleteNode(root -> right,min_value);
//             return root;  
//         }
        

//     }
//     else if(root -> val > val)
//     {
//         // left part me jao
//         root -> left = deleteNode(root -> left,val);
//         return root;
//     }
//     else
//     {
//         // Right part me jao
//         root -> right = deleteNode(root -> right,val);
//         return root;
//     }

//     return root;
// }


// Striver Approach
// TreeNode* deleteNode(TreeNode* root, int key) {
//         if (root == NULL) {
//             return NULL;
//         }
//         if (root->val == key) {
//             return helper(root);
//         }
//         TreeNode *dummy = root;
//         while (root != NULL) {
//             if (root->val > key) {
//                 if (root->left != NULL && root->left->val == key) {
//                     root->left = helper(root->left);
//                     break;
//                 } else {
//                     root = root->left;
//                 }
//             } else {
//                 if (root->right != NULL && root->right->val == key) {
//                     root->right = helper(root->right);
//                     break;
//                 } else {
//                     root = root->right;
//                 }
//             }
//         }
//         return dummy;
//     }
//     TreeNode* helper(TreeNode* root) {
//             if (root->left == NULL) 
//             {
//                 return root->right;
//             } 
//             else if (root->right == NULL)
//             {
//                 return root->left;
//             } 
//             TreeNode* rightChild = root->right;
//             TreeNode* lastRight = findLastRight(root->left);
//             lastRight->right = rightChild;
//             return root->left;
//     }
//     TreeNode* findLastRight(TreeNode* root) {
//         if (root->right == NULL) {
//             return root;
//         }
//         return findLastRight(root->right);
//     }
        
// };

