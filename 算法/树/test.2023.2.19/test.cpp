#define _CRT_SECURE_NO_WARNINGS 1
//144.二叉树的前序遍历
//void prevtravel(struct TreeNode* root, int* ret, int* returnSize)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//    ret[(*returnSize)++] = root->val;
//    prevtravel(root->left, ret, returnSize);
//    prevtravel(root->right, ret, returnSize);
//}
//
//int* preorderTraversal(struct TreeNode* root, int* returnSize)
//{
//
//    int* ret = (int*)malloc(sizeof(int) * 100);
//    *returnSize = 0;
//    prevtravel(root, ret, returnSize);
//    return ret;
//}
//94.二叉树的中序遍历
//void MidTravel(int* ret, struct TreeNode* root, int* returnSize)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//    MidTravel(ret, root->left, returnSize);
//    ret[(*returnSize)++] = root->val;
//    MidTravel(ret, root->right, returnSize);
//}
//int* inorderTraversal(struct TreeNode* root, int* returnSize)
//{
//    int* ret = (int*)malloc(sizeof(int) * 100);
//    *returnSize = 0;
//    MidTravel(ret, root, returnSize);
//    return ret;
//}
//145.二叉树的后序遍历
//void LastTravel(int* ret, struct TreeNode* root, int* returnSize)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//
//    LastTravel(ret, root->left, returnSize);
//    LastTravel(ret, root->right, returnSize);
//    ret[(*returnSize)++] = root->val;
//}
//int* postorderTraversal(struct TreeNode* root, int* returnSize)
//{
//    int* ret = (int*)malloc(sizeof(int) * 100);
//    *returnSize = 0;
//    LastTravel(ret, root, returnSize);
//    return ret;
//}
//104.二叉树的最大深度
//int maxDepth(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return 0;
//    }
//    return fmax(maxDepth(root->left), maxDepth(root->right)) + 1;
//}
//110.平衡二叉树
//int MaxDepth(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return 0;
//    }
//    return fmax(MaxDepth(root->left), MaxDepth(root->right)) + 1;
//}
//bool isBalanced(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return true;
//    }
//    int maxleft = MaxDepth(root->left);
//    int maxright = MaxDepth(root->right);
//    return fabs(maxleft - maxright) <= 1 && isBalanced(root->left) && isBalanced(root->right);
//}
