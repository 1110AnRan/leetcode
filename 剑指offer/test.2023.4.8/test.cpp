#define _CRT_SECURE_NO_WARNINGS 1

//��ָoffer 03.�������ظ�������
#include<vector>
#include<iostream>
#include<string>
using namespace std;
//class Solution {
//public:
//    int findRepeatNumber(vector<int>& nums)
//    {
//        if (nums.size() != 0)
//        {
//            vector<int> rel(nums.size(), -1);
//            for (int i = 0; i < nums.size(); i++)
//            {
//                if (nums[i] != rel[nums[i]])
//                {
//                    rel[nums[i]] = nums[i];
//                }
//                else
//                {
//                    return nums[i];
//                }
//            }
//        }
//        return 0;
//    }
//};

//��ָoffer 05.�滻�ո�
//class Solution {
//public:
//    string replaceSpace(string s)
//    {
//        string ret;
//        int count = 0;
//        for (int i = 0; i < s.size(); i++)
//        {
//            if (s[i] == ' ')
//            {
//                count += 3;
//            }
//        }
//        ret.resize(s.size() + count);
//        int j = 0;
//        for (int i = 0; i < s.size(); i++)
//        {
//            if (s[i] != ' ')
//            {
//                ret[j] = s[i];
//                j++;
//            }
//            else
//            {
//                ret[j++] = '%';
//                ret[j++] = '2';
//                ret[j++] = '0';
//            }
//        }
//        return ret;
//    }
//};
//int main()
//{
//    Solution s;
//    s.replaceSpace("We are happy.");
//    return 0;
//}

//��ָoffer 06.��β��ͷ��ӡ����
/**
* Definition for singly - linked list.
* struct ListNode {
*	int val;
*	ListNode* next;
*	ListNode(int x) : val(x), next(NULL) {}
*};
*/
//class Solution {
//public:
//    vector<int> reversePrint(ListNode* head)
//    {
//        vector<int> ret;
//        if (head)
//        {
//            while (head)
//            {
//                ret.push_back(head->val);
//                head = head->next;
//            }
//            reverse(ret.begin(), ret.end());
//            return ret;
//
//        }
//        return ret;
//    }
//};