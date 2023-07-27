
//234.回文链表
//快慢指针法
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
//class Solution {
//public:
//    bool isPalindrome(ListNode* head)
//    {
//        if (head->next == nullptr)
//        {
//            return true;
//        }
//        ListNode* prev = head;
//        ListNode* curr = head;
//        ListNode* prevv = nullptr;
//        while (curr && curr->next)
//        {
//            prevv = prev;
//            prev = prev->next;
//            curr = curr->next->next;
//        }
//        prevv->next = nullptr;
//        ListNode* prevnext = prev->next;
//        if (prev->next == nullptr)
//        {
//            prev->next = nullptr;
//            while (head && prev)
//            {
//                if (head->val != prev->val)
//                {
//                    return false;
//                }
//                head = head->next;
//                prev = prev->next;
//            }
//            return true;
//        }
//        else
//        {
//            ListNode* newnext = prevnext->next;
//            prev->next = nullptr;
//            while (prevnext)
//            {
//                prevnext->next = prev;
//                prev = prevnext;
//                prevnext = newnext;
//                if (newnext != nullptr)
//                {
//                    newnext = newnext->next;
//                }
//            }
//            while (prev && head)
//            {
//                if (head->val != prev->val)
//                {
//                    return false;
//                }
//                head = head->next;
//                prev = prev->next;
//            }
//            return true;
//        }
//        return true;
//    }
//};
//栈法(时间复杂度高，不推荐)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
//class Solution {
//private:
//    stack<int> s1;
//    stack<int> s2;
//public:
//    bool isPalindrome(ListNode* head)
//    {
//        if (head->next == nullptr)
//        {
//            return true;
//        }
//        while (head != nullptr)
//        {
//            s1.push(head->val);
//            head = head->next;
//        }
//        int ave = s1.size() / 2;
//        int dif = s1.size() % 2;
//        while (s1.size() > ave)
//        {
//            s2.push(s1.top());
//            s1.pop();
//        }
//        if (dif == 1)
//        {
//            s2.pop();
//        }
//        while (!s1.empty() && !s2.empty())
//        {
//            if (s1.top() != s2.top())
//            {
//                return false;
//            }
//            s1.pop();
//            s2.pop();
//        }
//        return true;
//    }
//};

//496.下一个更大元素I
//class Solution {
//public:
//    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
//    {
//        unordered_map<int, int> mp;
//        int i;
//        for (i = 0; i < nums2.size(); i++)
//        {
//            mp[nums2[i]] = i;
//        }
//        vector<int> ans(nums1.size(), -1);
//        int j;
//        for (i = 0; i < nums1.size(); i++)
//        {
//            for (j = mp[nums1[i]] + 1; j < nums2.size(); j++)
//            {
//                if (nums2[j] > nums1[i])
//                {
//                    ans[i] = nums2[j];
//                    break;
//                }
//            }
//        }
//        return ans;
//    }
//};

//682.棒球比赛
//class Solution {
//private:
//    stack<int> st;
//public:
//    int calPoints(vector<string>& operations)
//    {
//        int i;
//        for (i = 0; i < operations.size(); i++)
//        {
//            if (operations[i] == "+")
//            {
//                int num1 = st.top();
//                st.pop();
//                int num2 = st.top();
//                st.pop();
//                st.push(num2);
//                st.push(num1);
//                st.push(num1 + num2);
//            }
//            else if (operations[i] == "C")
//            {
//                st.pop();
//            }
//            else if (operations[i] == "D")
//            {
//                int num3 = st.top() * 2;
//                st.push(num3);
//            }
//            else
//            {
//                int num4 = 0;
//                if (operations[i][0] == '-')
//                {
//                    for (int j = 1; j < operations[i].size(); j++)
//                    {
//                        num4 = 10 * num4 + (operations[i][j] - '0');
//                    }
//                    num4 *= (-1);
//                }
//                else
//                {
//                    for (int j = 0; j < operations[i].size(); j++)
//                    {
//                        num4 = 10 * num4 + (operations[i][j] - '0');
//                    }
//                }
//                st.push(num4);
//            }
//        }
//        int ans = 0;
//        while (!st.empty())
//        {
//            ans += st.top();
//            st.pop();
//        }
//        return ans;
//    }
//};