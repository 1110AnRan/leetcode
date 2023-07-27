#define _CRT_SECURE_NO_WARNINGS 1
//19.删除链表的倒数第N个节点
//struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
//{
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    else if (head->next == NULL && n == 1)
//    {
//        return NULL;
//    }
//    struct ListNode* cur = head;
//    struct ListNode* prev = head;
//    int sum = 0;
//    while (cur)
//    {
//        sum++;
//        cur = cur->next;
//    }
//    if (sum == n)
//    {
//        struct ListNode* HeadNext = head;
//        head = HeadNext->next;
//        free(HeadNext);
//        HeadNext = NULL;
//    }
//    else
//    {
//        sum = sum - n - 1;
//        while (sum)
//        {
//            prev = prev->next;
//            sum--;
//        }
//        struct ListNode* prevNext = prev->next;
//        prev->next = prevNext->next;
//        free(prevNext);
//        prevNext = NULL;
//    }
//    return head;
//}
//876.链表的中间节点
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