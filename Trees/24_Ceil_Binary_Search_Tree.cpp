// Refer on:https://www.youtube.com/watch?v=KSsk8AhdOZA&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=42&ab_channel=takeUforward
/*

// https://practice.geeksforgeeks.org/problems/implementing-ceil-in-bst/1
int findCeil(BinaryTreeNode<int> *root, int key)
{
    int ceil = -1;
    while (root)
    {
        
        if (root->data == key)
        {
            ceil = root->data;
            return ceil;
        }
        if (key > root->data)
        {
            root = root->right;
        }
        else
        {
            ceil = root->data;
            root = root->left;
        }
    }
    return ceil;
}

*/