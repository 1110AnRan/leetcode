#define _CRT_SECURE_NO_WARNINGS 1
//344.反转字符串
//void reverseString(char* s, int sSize)
//{
//    int begin = 0;
//    int end = sSize - 1;
//    while (begin < end)
//    {
//        char temp = s[begin];
//        s[begin] = s[end];
//        s[end] = temp;
//        begin++;
//        end--;
//    }
//}
//557.反转字符串中的单词 III
//char* reverseWords(char* s)
//{
//    int len = strlen(s);
//    int i = 0;
//    while (i < len)
//    {
//        int begin = i;
//        while (i < len && s[i] != ' ')
//        {
//            i++;
//        }
//        int left = begin;
//        int right = i - 1;
//        while (left < right)
//        {
//            char temp = s[left];
//            s[left] = s[right];
//            s[right] = temp;
//            left++;
//            right--;
//        }
//
//        while (i < len && s[i] == ' ')
//        {
//            i++;
//        }
//    }
//    return s;
//}