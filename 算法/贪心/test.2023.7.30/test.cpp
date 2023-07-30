
//680.验证回文串 II
//class Solution {
//public:
//    bool checkvalidPalindrome(const string& s, int left, int right)
//    {
//        for (int i = left, j = right; i < j; i++, j--)
//        {
//            if (s[i] != s[j])
//            {
//                return false;
//            }
//        }
//        return true;
//    }
//    bool validPalindrome(string s)
//    {
//        if (s.size() == 1)
//        {
//            return true;
//        }
//        int left = 0, right = s.size() - 1;
//        while (left < right)
//        {
//            if (s[left] == s[right])
//            {
//                left++;
//                right--;
//            }
//            else
//            {
//                return checkvalidPalindrome(s, left + 1, right) || checkvalidPalindrome(s, left, right - 1);
//            }
//        }
//        return true;
//    }
//};

//860.柠檬水找零
//class Solution {
//public:
//    bool lemonadeChange(vector<int>& bills)
//    {
//        int five = 0, ten = 0;
//        int i;
//        for (i = 0; i < bills.size(); i++)
//        {
//            if (bills[i] == 5)
//            {
//                five++;
//            }
//            else if (bills[i] == 10)
//            {
//                if (five == 0)
//                {
//                    return false;
//                }
//                else
//                {
//                    ten++;
//                    five--;
//                }
//            }
//            else
//            {
//                if (five >= 1 && ten >= 1)
//                {
//                    five--;
//                    ten--;
//                }
//                else if (five >= 3)
//                {
//                    five -= 3;
//                }
//                else
//                {
//                    return false;
//                }
//            }
//        }
//        return true;
//    }
//};

//976.三角形的最大周长
//class Solution {
//public:
//    int largestPerimeter(vector<int>& nums)
//    {
//        sort(nums.begin(), nums.end());
//        int i = nums.size() - 3, j = nums.size() - 2, k = nums.size() - 1;
//        while (i >= 0)
//        {
//            if (nums[i] + nums[j] > nums[k])
//            {
//                return nums[i] + nums[j] + nums[k];
//            }
//            i--;
//            j--;
//            k--;
//        }
//        return 0;
//    }
//};

