//349.两个数组的交集
//map方法
//class Solution {
//public:
//    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
//    {
//        map<int, int> mp;
//        int i = 0;
//        for (i = 0; i < nums2.size(); i++)
//        {
//            mp[nums2[i]] = 1;
//        }
//        vector<int> v;
//        for (i = 0; i < nums1.size(); i++)
//        {
//            if (mp[nums1[i]])
//            {
//                v.push_back(nums1[i]);
//                mp[nums1[i]] = 0;
//            }
//        }
//        return v;
//    }
//};
//二分查找的方法
//class Solution {
//public:
//    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
//    {
//        vector<int> v;
//        set<int> s;
//        sort(nums1.begin(), nums1.end());
//        int i = 0;
//        for (; i < nums2.size(); i++)
//        {
//            int left = 0, right = nums1.size() - 1;
//            while (left <= right)
//            {
//                int mid = (right + left) >> 1;
//                if (nums1[mid] > nums2[i])
//                {
//                    right = mid - 1;
//                }
//                else if (nums1[mid] < nums2[i])
//                {
//                    left = mid + 1;
//                }
//                else
//                {
//                    s.insert(nums1[mid]);
//                    break;
//                }
//            }
//        }
//        auto it = s.begin();
//        while (it != s.end())
//        {
//            v.push_back(*it);
//            it++;
//        }
//        return v;
//    }
//};

//374.猜数字大小
///**
// * Forward declaration of guess API.
// * @param  num   your guess
// * @return 	     -1 if num is higher than the picked number
// *			      1 if num is lower than the picked number
// *               otherwise return 0
// * int guess(int num);
// */
//
//class Solution {
//public:
//    int guessNumber(int n)
//    {
//        int left = 1, right = n;
//        while (left <= right)
//        {
//            int mid = left + ((right - left) >> 1);
//            if (guess(mid) > 0)
//            {
//                left = mid + 1;
//            }
//            else if (guess(mid) < 0)
//            {
//                right = mid - 1;
//            }
//            else
//            {
//                return mid;
//            }
//        }
//        return left;
//    }
//};

