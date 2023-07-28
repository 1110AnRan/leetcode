//409.最长回文串
//class Solution {
//public:
//    int longestPalindrome(string s)
//    {
//        unordered_map<char, int> mp;
//        for (auto i : s)
//        {
//            mp[i]++;
//        }
//        int sum = 0;
//        int odd = 0;
//        for (auto i : mp)
//        {
//            int cnt = i.second;
//            int rem = cnt % 2;
//            sum += cnt - rem;
//            if (rem == 1)
//            {
//                odd = 1;
//            }
//
//        }
//        return sum + odd;
//    }
//};

//455.分发饼干
//class Solution {
//public:
//    int findContentChildren(vector<int>& g, vector<int>& s)
//    {
//        sort(g.begin(), g.end());
//        sort(s.begin(), s.end());
//        int i = 0, j = 0;
//        int cnt = 0;
//        for (i = 0; i < s.size() && j < g.size(); i++)
//        {
//            if (s[i] >= g[j])
//            {
//                cnt++;
//                j++;
//            }
//        }
//        return cnt;
//    }
//};

//561.数组拆分
//class Solution {
//public:
//    int arrayPairSum(vector<int>& nums)
//    {
//        sort(nums.begin(), nums.end());
//        int ans = 0;
//        int i;
//        for (i = 0; i < nums.size(); i++)
//        {
//            if (i % 2 == 0)
//            {
//                ans += nums[i];
//            }
//        }
//        return ans;
//    }
//};