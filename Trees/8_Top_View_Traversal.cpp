//{ Driver Code Starts
//Initial Template for C++

// question link :https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1
// refer link :https://www.youtube.com/watch?v=s1d8UGDCCN8&t=2984s&ab_channel=CodeHelp-byBabbar
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
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
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.

    // way 1
    // map<int,int> m;
    // queue<pair<Node*,int>> q;
    
    // void Topview(Node* root,int distance)
    // {
    //     q.push(make_pair(root,distance));
        
    //     while(!q.empty())
    //     {
    //         pair<Node*,int> temp = q.front();
    //         q.pop();
    //         Node* frontnode = temp.first;
    //         int hd = temp.second;
            
    //         if(m.find(hd) == m.end())
    //         {
    //             m[hd] = frontnode -> data;
    //         }
    //         if(frontnode -> left)
    //         {
    //             q.push(make_pair(frontnode->left,hd-1));
    //         }
    //         if(frontnode -> right)
    //         {
    //             q.push(make_pair(frontnode -> right,hd+1));
    //         }
    //     }
    // }
    
    // vector<int> topView(Node *root)
    // {
    //     vector<int> ans;
    //     if(root == NULL) return ans;
        
    //     Topview(root,0);
    //     for(auto i:m)
    //     {
    //         ans.push_back(i.second);
    //     }
    //     return ans;
        
    // }

    // way 2
    vector<int> topView(Node *root)
    {
       vector<int> v;
       map<int,int> mpp;
       queue<pair<Node*,int>> q;
       q.push({root,0});
       
       while(!q.empty())
       {
           auto it = q.front();
           q.pop();
           
           Node* node = it.first;
           int verline = it.second;
           
           if(mpp.find(verline) == mpp.end())
           {
               mpp[verline] = node->data;
           }
           
           if(node->left) q.push({node->left,verline-1});
           
           if(node->right) q.push({node->right,verline+1});
       }
       
       for(auto it:mpp)
       {
            v.push_back(it.second);   
       }
       
       return v;
    }

};



//{ Driver Code Starts.

int main() {
    int tc;
    cin>>tc;
    cin.ignore(256, '\n');
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Solution ob;
        Node *root = buildTree(treeString);
        vector<int> vec = ob.topView(root);
        for(int x : vec)
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends