
//894.所有可能的真二叉树
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
//    vector<TreeNode*> allPossibleFBT(int n)
//    {
//        if (n % 2 == 0)
//        {
//            return {};
//        }
//        if (n == 1)
//        {
//            return { new TreeNode(0) };
//        }
//        vector<TreeNode*> dp;
//        for (int i = 1; i <= n - 2; i++)
//        {
//            vector<TreeNode*> left = allPossibleFBT(i);
//            vector<TreeNode*> right = allPossibleFBT(n - 1 - i);
//            for (int j = 0; j < left.size(); j++)
//            {
//                for (int k = 0; k < right.size(); k++)
//                {
//                    TreeNode* newnode = new TreeNode(0);
//                    newnode->left = left[j];
//                    newnode->right = right[k];
//                    dp.push_back(newnode);
//
//                }
//            }
//        }
//        return dp;
//    }
//};


//198.打家劫舍
//class Solution {
//public:
//    int rob(vector<int>& nums)
//    {
//        vector<int> dp(nums.size() + 1);
//        dp[0] = 0;
//        dp[1] = nums[0];
//        for (int i = 2; i <= nums.size(); i++)
//        {
//            dp[i] = max(dp[i - 1], nums[i - 1] + dp[i - 2]);
//        }
//        return dp[nums.size()];
//    }
//};

//740.删除并获得点数
//class Solution {
//public:
//    int deleteAndEarn(vector<int>& nums)
//    {
//        if (nums.size() == 1)
//        {
//            return nums[0];
//        }
//        int _max = nums[0];
//        int i;
//        for (i = 1; i < nums.size(); i++)
//        {
//            _max = max(_max, nums[i]);
//        }
//        vector<int> sums(_max + 1, 0), dp(_max + 1, 0);
//        for (i = 0; i < nums.size(); i++)
//        {
//            sums[nums[i]] += nums[i];
//        }
//
//        dp[1] = sums[1];
//        for (i = 2; i <= _max; i++)
//        {
//            dp[i] = max(dp[i - 1], sums[i] + dp[i - 2]);
//        }
//        return dp[_max];
//    }
//};
