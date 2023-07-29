
//605.种花问题
//class Solution {
//public:
//    bool canPlaceFlowers(vector<int>& flowerbed, int n)
//    {
//        int i;
//        for (i = 0; i < flowerbed.size() && n>0;)
//        {
//            if (flowerbed[i] == 1)
//            {
//                i += 2;
//            }
//            else if (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)
//            {
//                n--;
//                i += 2;
//            }
//            else
//            {
//                i += 3;
//            }
//        }
//        return n <= 0;
//    }
//};

//942.增减字符串匹配
//class Solution {
//public:
//    vector<int> diStringMatch(string s)
//    {
//        int maxnum = s.size();
//        int minnum = 0;
//        vector<int> ans;
//        int i;
//        for (i = 0; i < s.size(); i++)
//        {
//            if (s[i] == 'I')
//            {
//                ans.push_back(minnum++);
//            }
//            else
//            {
//                ans.push_back(maxnum--);
//            }
//        }
//        ans.push_back(minnum);
//        return ans;
//    }
//};

