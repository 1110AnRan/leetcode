
//剑指offer 42.连续子数组的最大和
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) 
//    {
//        int ans = nums[0];
//        for (int i = 1; i < nums.size(); i++)
//        {
//            nums[i] += max(nums[i - 1], 0);
//            ans = max(ans, nums[i]);
//        }
//        return ans;
//    }
//};

//LCR 003.比特位计数
//class Solution {
//public:
//    vector<int> countBits(int n)
//    {
//        if (n == 0)
//        {
//            return { 0 };
//        }
//        else if (n == 1)
//        {
//            return { 0,1 };
//        }
//        vector<int> ans(n + 1);
//        ans[0] = 0;
//        ans[1] = 1;
//        for (int i = 2; i <= n; i++)
//        {
//            if (i % 2 == 0)
//            {
//                ans[i] = ans[i / 2];
//            }
//            else
//            {
//                ans[i] = ans[i / 2] + 1;
//            }
//        }
//        return ans;
//    }
//};

//1641.统计字典序元音字符串的数目
//class Solution {
//public:
//    int countVowelStrings(int n) {
//        return (n + 1) * (n + 2) * (n + 3) * (n + 4) / 24;
//    }
//};

//LCR 085.括号生成
//class Solution {
//public:
//    void getParenthesis(vector<string>& ans, string& result, int left, int right, int n)
//    {
//        if (result.size() == 2 * n)
//        {
//            ans.push_back(result);
//            return;
//        }
//        if (left < n)
//        {
//            result.push_back('(');
//            getParenthesis(ans, result, left + 1, right, n);
//            result.pop_back();
//        }
//        if (right < left)
//        {
//            result.push_back(')');
//            getParenthesis(ans, result, left, right + 1, n);
//            result.pop_back();
//        }
//    }
//    vector<string> generateParenthesis(int n) 
//    {
//        vector<string> ans;
//        string result;
//        getParenthesis(ans, result, 0, 0, n);
//        return ans;
//    }
//};