#define _CRT_SECURE_NO_WARNINGS 1
//LeetCode
//21.�ϲ�������������
// struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
//{
//    struct ListNode* prevhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* cur1 = list1;
//    struct ListNode* cur2 = list2;
//    struct ListNode* prev = prevhead;
//    prevhead->next = NULL;
//    while (cur1 && cur2)
//    {
//        if (cur1->val >= cur2->val)
//        {
//            prev->next = cur2;
//            prev = cur2;
//            cur2 = cur2->next;
//        }
//        else
//        {
//            prev->next = cur1;
//            prev = cur1;
//            cur1 = cur1->next;
//        }
//    }
//    if (cur1 == NULL)
//    {
//        prev->next = cur2;
//    }
//    else
//    {
//        prev->next = cur1;
//    }
//    return prevhead->next;
//}
//203.�Ƴ�����Ԫ��
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//    struct ListNode* prev = NULL;
//    struct ListNode* cur = head;
//    while (cur)
//    {
//        if (cur->val != val)
//        {
//            prev = cur;
//            cur = cur->next;
//        }
//        else
//        {
//            if (cur == head)
//            {
//                head = cur->next;
//                free(cur);
//                cur = head;
//            }
//            else
//            {
//                prev->next = cur->next;
//                free(cur);
//                cur = prev->next;
//            }
//        }
//    }
//    return head;
//}
//206.��ת����
//struct ListNode* reverseList(struct ListNode* head)
//{
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    struct ListNode* prev = head;
//    struct ListNode* cur = head->next;
//    struct ListNode* tmp = NULL;
//    prev->next = NULL;
//    while (cur)
//    {
//        tmp = prev;
//        prev = cur;
//        cur = cur->next;
//        prev->next = tmp;
//    }
//    head = prev;
//    return head;
//}
//876.������м�ڵ�
//struct ListNode* middleNode(struct ListNode* head)
//{
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//    }
//    return slow;
//}
//��ָ offer 22 . �����е�����k���ڵ�
//struct ListNode* getKthFromEnd(struct ListNode* head, int k)
//{
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;	
//    while (k--)
//    {
//        if (fast == NULL)
//        {
//            return NULL;
//        }
//        fast = fsat->next;
//    }
//    while (fast)
//    {
//        slow = slow->next;
//        fsat = fast->next;
//    }
//    return slow;
//}