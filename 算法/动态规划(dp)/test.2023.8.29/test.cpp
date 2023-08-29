


// LCR 088.使用最小花费爬楼梯
//#include<bits/stdc++.h>
//using namespace std;
//class Solution {
//public:
//    int minCostClimbingStairs(vector<int>& cost)
//    {
//        vector<int> f;
//        f.resize(cost.size() + 1, 0);
//        f[0] = cost[0];
//        f[1] = cost[1];
//        int i;
//        for (i = 2; i < f.size(); i++)
//        {
//            if (i < cost.size())
//            {
//                f[i] = min(f[i - 2] + cost[i], f[i - 1] + cost[i]);
//            }
//            else
//            {
//                f[i] = min(f[i - 2], f[i - 1]);
//            }
//        }
//        return f[f.size()-1];
//    }
//};
//int main()
//{
//    Solution s;
//    vector<int> cost;
//    cost.push_back(10);
//    cost.push_back(15);
//    cost.push_back(20);
//    cout<<s.minCostClimbingStairs(cost);
//
//	return 0;
//}


// 面试题16.17. 连续数列
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums)
//    {
//        if (nums.size() == 1)
//        {
//            return nums[0];
//        }
//        vector<int> f;
//        f.resize(nums.size(), 0);
//        f[0] = nums[0];
//        int i;
//        int ret = f[0];
//        for (i = 1; i < nums.size(); i++)
//        {
//            f[i] = max(f[i - 1] + nums[i], nums[i]);
//            ret = max(ret, f[i]);
//        }
//        return ret;
//    }
//};

//392.判断子序列
//class Solution {
//public:
//    bool isSubsequence(string s, string t)
//    {
//        int i = 0, j = 0;
//        while (i < s.size() && j < t.size())
//        {
//            if (s[i] == t[j])
//            {
//                i++;
//            }
//            j++;
//        }
//        if (i == s.size())
//        {
//            return true;
//        }
//        return false;
//    }
//};