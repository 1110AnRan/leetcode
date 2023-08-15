
//22. 括号生成
//class Solution {
//public:
//    void _generateParenthesis(vector<string>& ans, string& s, int left, int right, int n)
//    {
//        if (s.size() == n * 2)
//        {
//            ans.push_back(s);
//            return;
//        }
//        if (left < n)
//        {
//            s.push_back('(');
//            _generateParenthesis(ans, s, left + 1, right, n);
//            s.pop_back();
//        }
//        if (right < left)
//        {
//            s.push_back(')');
//            _generateParenthesis(ans, s, left, right + 1, n);
//            s.pop_back();
//        }
//        return;
//    }
//    vector<string> generateParenthesis(int n)
//    {
//        vector<string> ret;
//        string s;
//        _generateParenthesis(ret, s, 0, 0, n);
//        return ret;
//    }
//};

//53.最大子数组和
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums)
//    {
//        int ret = nums[0];
//        int cur = 0;
//        for (auto i : nums)
//        {
//            if (cur > 0)
//            {
//                cur += i;
//            }
//            else
//            {
//                cur = i;
//            }
//            ret = max(ret, cur);
//        }
//        return ret;
//    }
//};

