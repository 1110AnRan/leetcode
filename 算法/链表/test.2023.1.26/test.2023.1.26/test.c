#define _CRT_SECURE_NO_WARNINGS 1
//147.对链表进行插入排序
//struct ListNode* insertionSortList(struct ListNode* head)
//{
//    if (head == NULL)
//    {
//        return head;
//    }
//    struct ListNode* newhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    newhead->next = head;
//    struct ListNode* InsertPos = head, * cur = head->next;
//    while (cur)
//    {
//        if (InsertPos->val <= cur->val)
//        {
//            InsertPos = InsertPos->next;
//        }
//        else
//        {
//            struct ListNode* prev = newhead;
//            while (prev->next->val <= cur->val)
//            {
//                prev = prev->next;
//            }
//            InsertPos->next = cur->next;
//            cur->next = prev->next;
//            prev->next = cur;
//        }
//        cur = InsertPos->next;
//    }
//    return newhead->next;
//}
//83.删除排序链表中的重复元素
//struct ListNode* deleteDuplicates(struct ListNode* head)
//{
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    struct ListNode* cur = head->next;
//    struct ListNode* prev = head;
//    while (cur)
//    {
//        if (prev->val == cur->val)
//        {
//            struct ListNode* FreeCur = cur;
//            cur = cur->next;
//            prev->next = cur;
//            free(FreeCur);
//        }
//        else
//        {
//            prev = prev->next;
//            cur = cur->next;
//        }
//    }
//    return head;
//}
//82.删除排序链表中的重复元素 II
//struct ListNode* deleteDuplicates(struct ListNode* head)
//{
//    if (!head)
//    {
//        return NULL;
//    }
//    struct ListNode* newhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    newhead->next = head;
//    struct ListNode* cur = newhead;
//    while (cur->next && cur->next->next)
//    {
//        if (cur->next->val == cur->next->next->val)
//        {
//            int val = cur->next->val;
//            while (cur->next && val == cur->next->val)
//            {
//                cur->next = cur->next->next;
//            }
//        }
//        else
//        {
//            cur = cur->next;
//        }
//    }
//    return newhead->next;
//}
