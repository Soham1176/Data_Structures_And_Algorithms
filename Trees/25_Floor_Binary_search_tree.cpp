// Refer on:https://www.youtube.com/watch?v=xm_W1ub-K-w&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=43&ab_channel=takeUforward
/*

// https://practice.geeksforgeeks.org/problems/floor-in-bst/1
int findCeil(BinaryTreeNode<int> *root, int key)
{
    int floor = -1;
    while (root)
    {
        
        if (root->data == key)
        {
            floor = root->data;
            return floor;
        }
        if (key > root->data)
        {
            floor = root -> data;
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    return floor;
}
*/