#ifndef RECCHECK
// if you want to add any #includes like <iostream> you must do them here (before the next endif)

#endif

#include "equal-paths.h"
using namespace std;

// You may add any prototypes of helper functions here
int height(Node *root)
// returns -1 if height of left and right subtrees are not equal
{
    if (root == nullptr)
        return 0;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    if (leftHeight == -1 || rightHeight == -1)
        return -1;
    if (leftHeight == 0)
        return rightHeight + 1;
    if (rightHeight == 0)
        return leftHeight + 1;
    if (leftHeight != rightHeight)
        return -1;
    return 1 + leftHeight;
}

bool equalPaths(Node *root)
{
    return height(root) != -1;
}
