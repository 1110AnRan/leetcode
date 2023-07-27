#define _CRT_SECURE_NO_WARNINGS 1
//剑指offer 27.二叉树的镜像
//struct TreeNode* mirrorTree(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return NULL;
//    }
//
//    //首先保存根节点的右节点
//    struct TreeNode* newright = root->right;
//    root->right = root->left;
//    root->left = newright;
//
//    mirrorTree(root->left);
//    mirrorTree(root->right);
//
//    return root;
//}
//897.递增顺序搜索树
//struct TreeNode* CreatNewNode(int val)
//{
//    struct TreeNode* newnode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
//    newnode->val = val;
//    newnode->left = newnode->right = NULL;
//    return newnode;
//}
//
//void MidErgodic(struct TreeNode* root, int* arr, int* size)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//
//    MidErgodic(root->left, arr, size);
//    arr[(*size)++] = root->val;
//    MidErgodic(root->right, arr, size);
//}
//
//struct TreeNode* increasingBST(struct TreeNode* root)
//{
//
//    //先进行中序遍历，通过中序遍历将各个节点是val值放入数组中
//    int arr[100] = { 0 };
//    int size = 0;
//    MidErgodic(root, arr, &size);
//
//    //将数组arr中的元素按增序放到新的树中
//
//    //申请一个哑节点
//    struct TreeNode* dummynode = CreatNewNode(-1);
//    struct TreeNode* newnode = dummynode;
//    for (int i = 0; i < size; i++)
//    {
//        newnode->right = CreatNewNode(arr[i]);
//        newnode = newnode->right;
//    }
//    return dummynode->right;
//}