#define _CRT_SECURE_NO_WARNINGS 1
//剑指offer 55 -I.二叉树的深度
//int maxDepth(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return 0;
//    }
//    else
//    {
//        return fmax(maxDepth(root->left), maxDepth(root->right)) + 1;
//    }
//}
//剑指offer 55 -II.平衡二叉树
//int MaxHeigh(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return 0;
//    }
//    else
//    {
//        return fmax(MaxHeigh(root->left), MaxHeigh(root->right)) + 1;
//    }
//}
//
//bool isBalanced(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return true;
//    }
//    else
//    {
//        return fabs(MaxHeigh(root->left) - MaxHeigh(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);
//    }
//}