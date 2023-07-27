#define _CRT_SECURE_NO_WARNINGS 1
//ÃæÊÔ 02.04.·Ö¸îÁ´±í
//struct ListNode* partition(struct ListNode* head, int x)
//{
//    struct ListNode* more = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* morehead = more;
//    struct ListNode* less = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* lesshead = less;
//    while (head)
//    {
//        if (x > head->val)
//        {
//            less->next = head;
//            less = less->next;
//        }
//        else
//        {
//            more->next = head;
//            more = more->next;
//        }
//        head = head->next;
//    }
//    more->next = NULL;
//    less->next = morehead->next;
//    return lesshead->next;
//}
