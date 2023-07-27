#define _CRT_SECURE_NO_WARNINGS 1

//剑指offer 25.合并两个排序的链表
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//class Solution {
//public:
//    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
//    {
//        if (l1 == NULL && l2 == NULL)
//        {
//            return NULL;
//        }
//        else if (l1 == NULL && l2 != NULL)
//        {
//            return l2;
//        }
//        else if (l1 != NULL && l2 == NULL)
//        {
//            return l1;
//        }
//        else
//        {
//            ListNode* newhead = new ListNode();
//            ListNode* cur = newhead;
//            cur->val = -1;
//            while (l1 && l2)
//            {
//                if (l1->val < l2->val)
//                {
//                    cur->next = l1;
//                    l1 = l1->next;
//                    cur = cur->next;
//                    cur->next = NULL;
//                }
//                else
//                {
//                    cur->next = l2;
//                    l2 = l2->next;
//                    cur = cur->next;
//                    cur->next = NULL;
//                }
//            }
//            if (l1)
//            {
//                cur->next = l1;
//            }
//            else
//            {
//                cur->next = l2;
//            }
//            return newhead->next;
//        }
//    }
//};

//剑指offer II 077.链表排序
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
//    ListNode* sortList(ListNode* head)
//    {
//        if (head == nullptr || head->next == nullptr)
//        {
//            return head;
//        }
//        vector<int> v;
//        ListNode* cur = head;
//        while (cur)
//        {
//            v.push_back(cur->val);
//            cur = cur->next;
//        }
//        sort(v.begin(), v.end());
//        cur = head;
//        int i = 0;
//        while (cur)
//        {
//            cur->val = v[i];
//            cur = cur->next;
//            i++;
//        }
//        return head;
//    }
//};

//剑指offer 18. 删除链表的节点
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//class Solution {
//public:
//    ListNode* deleteNode(ListNode* head, int val)
//    {
//        if (head == NULL)
//        {
//            return head;
//        }
//        else if (head->val == val)
//        {
//            ListNode* DeleteNode = head;
//            head = head->next;
//            return head;
//        }
//        else
//        {
//            ListNode* cur = head;
//            ListNode* prev = NULL;
//            while (cur->val != val)
//            {
//                prev = cur;
//                cur = cur->next;
//            }
//            prev->next = cur->next;
//            delete cur;
//            return head;
//        }
//    }
//};

//剑指offer II 024.反转链表
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
//    ListNode* reverseList(ListNode* head)
//    {
//        if (head == NULL || head->next == NULL)
//        {
//            return head;
//        }
//        ListNode* cur = head->next;
//        ListNode* pre = head;
//        pre->next = NULL;
//        while (cur && cur->next)
//        {
//            ListNode* next = cur->next;
//            cur->next = pre;
//            pre = cur;
//            cur = next;
//            next = next->next;
//        }
//        cur->next = pre;
//        return cur;
//    }
//};

//剑指offer 04.二维数组中的查找
//class Solution {
//public:
//    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target)
//    {
//        if (matrix.size() == 0)
//        {
//            return false;
//        }
//        int i = 0, j = matrix[0].size() - 1;
//        while (i <= matrix.size() - 1 && j >= 0)
//        {
//            if (matrix[i][j] < target)
//            {
//                i++;
//            }
//            else if (matrix[i][j] > target)
//            {
//                j--;
//            }
//            else
//            {
//                return true;
//            }
//        }
//        return false;
//    }
//};