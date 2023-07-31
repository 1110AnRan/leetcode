
//102.二叉树的层序遍历
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
//    vector<vector<int>> levelOrder(TreeNode* root)
//    {
//        vector<vector<int>> ans;
//        queue<TreeNode*> q;
//        if (root == nullptr)
//        {
//            return {};
//        }
//        q.push(root);
//        while (!q.empty())
//        {
//            vector<int> ret;
//            int cursize = q.size();
//            int i;
//            for (i = 1; i <= cursize; i++)
//            {
//                auto newnode = q.front();
//                q.pop();
//                ret.push_back(newnode->val);
//                if (newnode->left)
//                {
//                    q.push(newnode->left);
//                }
//                if (newnode->right)
//                {
//                    q.push(newnode->right);
//                }
//            }
//            ans.push_back(ret);
//        }
//        return ans;
//    }
//};

//100.相同的树
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
//    bool isSameTree(TreeNode* p, TreeNode* q)
//    {
//        if ((p == nullptr && q != nullptr)
//            || (p != nullptr && q == nullptr))
//        {
//            return false;
//        }
//        else if (p == nullptr && q == nullptr)
//        {
//            return true;
//        }
//        queue<TreeNode*> q1;
//        queue<TreeNode*> q2;
//        q1.push(p);
//        q2.push(q);
//        while (!q1.empty() && !q2.empty())
//        {
//            int cursize1 = q1.size();
//            int cursize2 = q2.size();
//            if (cursize1 != cursize2)
//            {
//                return false;
//            }
//            int i;
//            for (i = 1; i <= cursize1; i++)
//            {
//                auto newnode1 = q1.front();
//                auto newnode2 = q2.front();
//                if (newnode1->val != newnode2->val)
//                {
//                    return false;
//                }
//                q1.pop();
//                q2.pop();
//                if ((newnode1->left == nullptr && newnode2->left != nullptr)
//                    || (newnode1->left != nullptr && newnode2->left == nullptr)
//                    || (newnode1->right == nullptr && newnode2->right != nullptr)
//                    || (newnode1->right != nullptr && newnode2->right == nullptr))
//                {
//                    return false;
//                }
//                else
//                {
//                    if (newnode1->left && newnode2->left)
//                    {
//                        q1.push(newnode1->left);
//                        q2.push(newnode2->left);
//                    }
//                    if (newnode1->right && newnode2->right)
//                    {
//                        q1.push(newnode1->right);
//                        q2.push(newnode2->right);
//                    }
//                }
//
//            }
//        }
//        if (!q1.empty() || !q2.empty())
//        {
//            return false;
//        }
//        return true;
//    }
//};

