#define _CRT_SECURE_NO_WARNINGS 1
//��ָoffer 27.�������ľ���
//struct TreeNode* mirrorTree(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return NULL;
//    }
//
//    //���ȱ�����ڵ���ҽڵ�
//    struct TreeNode* newright = root->right;
//    root->right = root->left;
//    root->left = newright;
//
//    mirrorTree(root->left);
//    mirrorTree(root->right);
//
//    return root;
//}
//897.����˳��������
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
//    //�Ƚ������������ͨ����������������ڵ���valֵ����������
//    int arr[100] = { 0 };
//    int size = 0;
//    MidErgodic(root, arr, &size);
//
//    //������arr�е�Ԫ�ذ�����ŵ��µ�����
//
//    //����һ���ƽڵ�
//    struct TreeNode* dummynode = CreatNewNode(-1);
//    struct TreeNode* newnode = dummynode;
//    for (int i = 0; i < size; i++)
//    {
//        newnode->right = CreatNewNode(arr[i]);
//        newnode = newnode->right;
//    }
//    return dummynode->right;
//}