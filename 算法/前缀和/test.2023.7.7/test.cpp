//209 长度最小的子数组
//class Solution {
//public:
//    int minSubArrayLen(int target, vector<int>& nums)
//    {
//        int n = nums.size();
//        if (n == 0)
//        {
//            return 0;
//        }
//        int ans = INT_MAX;
//        vector<int> sums(n + 1, 0);
//        int i = 0;
//        for (i = 1; i <= n; i++)
//        {
//            sums[i] = sums[i - 1] + nums[i - 1];
//        }
//        for (i = 1; i <= n; i++)
//        {
//            int s = target + sums[i - 1];
//            auto bound = lower_bound(sums.begin(), sums.end(), s);
//            if (bound != sums.end())
//            {
//                ans = min(ans, static_cast<int>((bound - sums.begin()) - (i - 1)));
//            }
//        }
//        return ans == INT_MAX ? 0 : ans;
//    }
//};

//523.连续的子数组
//class Solution {
//public:
//    bool checkSubarraySum(vector<int>& nums, int k)
//    {
//        int n = nums.size();
//        if (n < 2)
//        {
//            return false;
//        }
//
//        unordered_map<int, int> mp = { {0,-1} };
//        int sum = 0;
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            sum = (sum + nums[i]) % k;
//            if (mp.count(sum))
//            {
//                int pos = mp[sum];
//                if ((i - pos) >= 2)
//                {
//                    return true;
//                }
//            }
//            else
//            {
//                mp[sum] = i;
//            }
//        }
//        return false;
//    }
//};

//1480.一维数组的动态和
//class Solution {
//public:
//    vector<int> runningSum(vector<int>& nums)
//    {
//        vector<int> ret(nums.size());
//        ret[0] = nums[0];
//        int i = 0;
//        for (i = 1; i < nums.size(); i++)
//        {
//            ret[i] = ret[i - 1] + nums[i];
//        }
//        return ret;
//    }
//};

