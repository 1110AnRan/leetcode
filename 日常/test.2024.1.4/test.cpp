

//9.������
//class Solution {
//public:
//    bool isPalindrome(int x)
//    {
//        if (x < 0)
//        {
//            return false;
//        }
//        string s;
//        while (x)
//        {
//            s += '0' + x % 10;
//            x /= 10;
//        }
//        int l = 0, r = s.size() - 1;
//        while (l < r)
//        {
//            if (s[l] != s[r])
//            {
//                return false;
//            }
//            ++l;
//            --r;
//        }
//        return true;
//    }
//};


//58.���һ�����ʵĳ���
//class Solution {
//public:
//    int lengthOfLastWord(string s)
//    {
//        int ret = 0;
//        int i = s.size() - 1;
//        for (; i >= 0; i--)
//        {
//            if (s[i] != ' ')
//            {
//                break;
//            }
//        }
//        for (int j = i; j >= 0; j--)
//        {
//            if (s[j] != ' ')
//            {
//                ret++;
//            }
//            else
//            {
//                break;
//            }
//        }
//        return ret;
//
//    }
//};