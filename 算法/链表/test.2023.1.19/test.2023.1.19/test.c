#define _CRT_SECURE_NO_WARNINGS 1
//LeetCode 
//��ָoffer II 027.��������
//bool isPalindrome(struct ListNode* head)
//{
//    //�ҵ��м��
//    struct ListNode* slow, * fast;
//    slow = fast = head;
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//    }
//
//    //��ת����
//    struct ListNode* prev = slow, * cur = slow->next, * tmp = NULL;
//    while (cur)
//    {
//        tmp = prev;
//        prev = cur;
//        cur = cur->next;
//        prev->next = tmp;
//    }
//
//    slow->next = NULL;
//    //�ж��Ƿ����
//    while (head && prev)
//    {
//        if (head->val != prev->val)
//        {
//            return false;
//        }
//        head = head->next;
//        prev = prev->next;
//    }
//    return true;
//}
//160.�ཻ����
//struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB)
//{
//    if (headA == NULL || headB == NULL)
//    {
//        return NULL;
//    }
//    struct ListNode* curA = headA, * curB = headB;
//    while (curA != curB)
//    {
//        if (curA == NULL)
//        {
//            curA = headB;
//        }
//        else
//        {
//            curA = curA->next;
//        }
//        if (curB == NULL)
//        {
//            curB = headA;
//        }
//        else
//        {
//            curB = curB->next;
//        }
//    }
//    return curA;
//}
//141.��������
//bool hasCycle(struct ListNode* head)
//{
//    if (head == NULL)
//    {
//        return false;
//    }
//    struct ListNode* slow = head, * fast = head;
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//        if (slow == fast)
//        {
//            return true;
//        }
//    }
//    return false;
//}	
//142.��������II
//struct ListNode* detectCycle(struct ListNode* head)
//{
//    struct ListNode* slow = head, * fast = head;
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//        if (slow == fast)
//        {
//            //�ҵ������ڵ�  
//            struct ListNode* meet = slow;
//            //��ʽ֤��
//            while (meet != head)
//            {
//                meet = meet->next;
//                head = head->next;
//            }
//            return meet;
//        }
//    }
//    return NULL;
//}
