
//1646.获取生成数组中的最大值
//class Solution {
//public:
//    int getMaximumGenerated(int n)
//    {
//        if (n == 0)
//        {
//            return 0;
//        }
//        else if (n == 1 || n == 2)
//        {
//            return 1;
//        }
//        vector<int> v(n + 1);
//        int i;
//        v[0] = 0;
//        v[1] = 1;
//        for (i = 2; i <= n; i++)
//        {
//            if (i % 2 == 0)
//            {
//                v[i] = v[i / 2];
//            }
//            else
//            {
//                v[i] = v[i / 2] + v[i / 2 + 1];
//            }
//        }
//        return *max_element(v.begin(), v.end());
//    }
//};

//剑指offer 10-II. 青蛙跳台阶问题
//class Solution {
//public:
//    int numWays(int n)
//    {
//        if (n == 0 || n == 1)
//        {
//            return 1;
//        }
//        else if (n == 2)
//        {
//            return 2;
//        }
//        int a = 1, b = 2, ans;
//        int i;
//        for (i = 3; i <= n; i++)
//        {
//            ans = (a + b) % 1000000007;
//            a = b;
//            b = ans;
//        }
//        return ans;
//    }
//};

