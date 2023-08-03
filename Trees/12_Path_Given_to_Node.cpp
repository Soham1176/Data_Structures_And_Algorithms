/**
 * refer : https://www.youtube.com/watch?v=fmflMqVOC7k&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=30&t=1s&ab_channel=takeUforward
 * question link:https://www.interviewbit.com/problems/path-to-given-node/
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// <=====================Main Code =====================>
// Soln of Soham
/*

 void Traverse(TreeNode* root,vector<int> &v,int data)
 {
    v.push_back(root ->val);
    
    if(root -> left != NULL)
    {
        Traverse(root -> left,v,data);
        
        if(data  == v.back())
        {
            return;
        }
        v.pop_back();
    }
    
    if(root -> right != NULL)
    {
        Traverse(root -> right,v,data);
        
        if(data  == v.back())
        {
            return;
        }
        v.pop_back();
    }
 }
 
vector<int> Solution::solve(TreeNode* A, int B) {
    
    vector<int> v;
    
    if(A == NULL) return v;
    
    Traverse(A,v,B);
    
    return v;
}
*/

// Soln of Stiver:
#include <bits/stdc++.h>

using namespace std;

struct node {
  int data;
  struct node * left, * right;
};

bool getPath(node * root, vector < int > & arr, int x) {
  // if root is NULL
  // there is no path
  if (!root)
    return false;

  // push the node's value in 'arr'
  arr.push_back(root -> data);

  // if it is the required node
  // return true
  if (root -> data == x)
    return true;

  // else check whether the required node lies
  // in the left subtree or right subtree of
  // the current node
  if (getPath(root -> left, arr, x) ||
    getPath(root -> right, arr, x))
    return true;

  // required node does not lie either in the
  // left or right subtree of the current node
  // Thus, remove current node's value from
  // 'arr'and then return false   
  arr.pop_back();
  return false;
}

struct node * newNode(int data) {
  struct node * node = (struct node * ) malloc(sizeof(struct node));
  node -> data = data;
  node -> left = NULL;
  node -> right = NULL;

  return (node);
}

int main() {

  struct node * root = newNode(1);
  root -> left = newNode(2);
  root -> left -> left = newNode(4);
  root -> left -> right = newNode(5);
  root -> left -> right -> left = newNode(6);
  root -> left -> right -> right = newNode(7);
  root -> right = newNode(3);

  vector < int > arr;

  bool res;
  res = getPath(root, arr, 7);

  cout << "The path is ";
  for (auto it: arr) {
    cout << it << " ";
  }

  return 0;
}