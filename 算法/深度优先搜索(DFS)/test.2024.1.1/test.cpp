

//101.对称二叉树
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//class Solution {
//public:
//    bool dfs(TreeNode* Left, TreeNode* Right)
//    {
//        if (Left == nullptr && Right == nullptr)
//        {
//            return true;
//        }
//        if (Left == nullptr || Right == nullptr)
//        {
//            return false;
//        }
//        if (Left->val != Right->val)
//        {
//            return false;
//        }
//        return dfs(Left->left, Right->right) && dfs(Left->right, Right->left);
//    }
//    bool isSymmetric(TreeNode* root)
//    {
//        if (root == nullptr)
//        {
//            return true;
//        }
//
//        return dfs(root->left, root->right);
//    }
//};



//LCR 67.装饰树
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//class Solution {
//public:
//    void dfs(TreeNode*& root)
//    {
//        if (root == nullptr)
//        {
//            return;
//        }
//        TreeNode* leftchild = root->left;
//        TreeNode* rightchild = root->right;
//        if (leftchild != nullptr)
//        {
//            TreeNode* newnode1 = new TreeNode(-1, leftchild, nullptr);
//            root->left = newnode1;
//            dfs(leftchild);
//        }
//        if (rightchild != nullptr)
//        {
//            TreeNode* newnode2 = new TreeNode(-1, nullptr, rightchild);
//            root->right = newnode2;
//            dfs(rightchild);
//        }
//    }
//    TreeNode* expandBinaryTree(TreeNode* root)
//    {
//        if (root == nullptr)
//        {
//            return nullptr;
//        }
//        dfs(root);
//        return root;
//    }
//};


//1302.层数最深叶子节点的和
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//class Solution {
//private:
//    int high = -1;
//    int sum = 0;
//public:
//    int deepestLeavesSum(TreeNode* root)
//    {
//        dfs(root, 0);
//        return sum;
//    }
//    void dfs(TreeNode* root, int step)
//    {
//        if (root == nullptr)
//        {
//            return;
//        }
//
//        if (step > high)
//        {
//            high = step;
//            sum = root->val;
//        }
//        else if (step == high)
//        {
//            sum += root->val;
//        }
//        dfs(root->left, step + 1);
//        dfs(root->right, step + 1);
//    }
//};