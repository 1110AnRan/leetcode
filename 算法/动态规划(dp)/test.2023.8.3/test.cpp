

//118.杨辉三角
//class Solution {
//public:
//    vector<vector<int>> generate(int numRows) {
//        vector<vector<int>> ans(numRows);
//        for (int i = 0; i < numRows; i++) 
//        {
//            ans[i].resize(i + 1);
//            ans[i][0] = ans[i][i] = 1;
//            for (int j = 1; j < i; j++)
//            {
//                ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1];
//            }
//        }
//        return ans;
//    }
//};

//338.比特位计数
//class Solution {
//public:
//    vector<int> countBits(int n)
//    {
//        vector<int> ans;
//        ans.push_back(0);
//        for (int i = 1; i <= n; i++)
//        {
//            int flag = i;
//            int cnt = 0;
//            while (flag)
//            {
//                flag = flag & (flag - 1);
//                cnt++;
//            }
//            ans.push_back(cnt);
//        }
//        return ans;
//    }
//};

//1025.除数博弈
//class Solution {
//public:
//    bool divisorGame(int n) {
//        return n % 2 == 0;
//    }
//};

//1137.第N个泰波那契树
//class Solution {
//public:
//    int tribonacci(int n)
//    {
//        if (n == 0)
//        {
//            return 0;
//        }
//        else if (n == 1 || n == 2)
//        {
//            return 1;
//        }
//        int a = 0, b = 1, c = 1, ret = a + b + c;
//        for (int i = 3; i < n; i++)
//        {
//            a = b;
//            b = c;
//            c = ret;
//            ret = a + b + c;
//        }
//        return ret;
//    }
//};

//剑指offer 10-I. 斐波那契数列
//class Solution {
//public:
//    int fib(int n)
//    {
//        int mod = 1000000007;
//        if (n == 0)
//        {
//            return 0;
//        }
//        else if (n == 1)
//        {
//            return 1;
//        }
//        int a = 0, b = 1, ret = a + b;
//        for (int i = 2; i < n; i++)
//        {
//            a = b;
//            b = ret;
//            ret = (a + b) % mod;
//        }
//        return ret;
//    }
//};