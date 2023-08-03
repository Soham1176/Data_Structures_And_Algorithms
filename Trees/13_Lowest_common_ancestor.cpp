/**
 * refer to :1) https://www.youtube.com/watch?v=_-QHfMDde90&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=28&ab_channel=takeUforward
 *           2) https://www.youtube.com/watch?v=QG0hE0R_ng4&t=1211s&ab_channel=CodeHelp-byBabbar
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

/*
code link :https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/description/
class Solution {
public:
    TreeNode* LCA(TreeNode* root,int &n1,int &n2)
    {
        if(root == NULL) 
        {
            return NULL;
        }

        if(root -> val == n1 || root -> val == n2)
        {
            return root;
        }

        TreeNode* LeftNode_ans = LCA(root -> left,n1,n2);
        TreeNode* RightNode_ans = LCA(root -> right,n1,n2);

        if(LeftNode_ans != NULL && RightNode_ans != NULL)
        {
            return root;
        }
        else if(LeftNode_ans != NULL && RightNode_ans == NULL)
        {
            return LeftNode_ans;
        }
        else if(LeftNode_ans == NULL && RightNode_ans != NULL)
        {
            return RightNode_ans;
        }
        else
        {
            return NULL;
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if(root == NULL) return NULL;

        int n1 = p -> val;
        int n2 = q -> val;

       TreeNode* lowest_common_ancestor_to_find = LCA(root,n1,n2);
       return lowest_common_ancestor_to_find;
    }
};
*/

// { Driver Code Starts
//  code link : https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(){
        data = 0;
        left = right = NULL;
    }
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

// } Driver Code Ends
/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* LCA(Node* root,int &n1,int &n2)
    {
        if(root == NULL) 
        {
            return NULL;
        }

        if(root -> data == n1 || root ->data  == n2)
        {
            return root;
        }

        Node* LeftNode_ans = LCA(root -> left,n1,n2);
        Node* RightNode_ans = LCA(root -> right,n1,n2);

        if(LeftNode_ans != NULL && RightNode_ans != NULL)
        {
            return root;
        }
        else if(LeftNode_ans != NULL && RightNode_ans == NULL)
        {
            return LeftNode_ans;
        }
        else if(LeftNode_ans == NULL && RightNode_ans != NULL)
        {
            return RightNode_ans;
        }
        else
        {
            return NULL;
        }
    }
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       if(root == NULL) return NULL;

       Node* lowest_common_ancestor_to_find = LCA(root,n1,n2);
       return lowest_common_ancestor_to_find; 
    }
};

//{ Driver Code Starts.

Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // for(string i:ip)
    //     cout<<i<<" ";
    // cout<<endl;
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

// Function for Inorder Traversal
void printInorder(Node* root)
{
    if(!root)
        return;

    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d ",&a,&b);
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        Solution ob;
        cout<<ob.lca(root,a,b)->data<<endl;
    }
    return 0;
}

// } Driver Code Ends