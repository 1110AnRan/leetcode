#define _CRT_SECURE_NO_WARNINGS 1
//189.��ת����
//void rotate(int* nums, int numsSize, int k)
//{
//    int prev = 0;
//    int cur = numsSize - k % numsSize;
//    int prevend = cur - 1;
//    int curend = numsSize - 1;
//    int begin = 0;
//    int end = numsSize - 1;
//
//    //�ȷ�תprev->prevend����
//
//    while (prev < prevend)
//    {
//        int temp1 = nums[prev];
//        nums[prev] = nums[prevend];
//        nums[prevend] = temp1;
//        prev++;
//        prevend--;
//    }
//
//    //�ٷ�תcur->curend����
//
//    while (cur < curend)
//    {
//        int temp2 = nums[cur];
//        nums[cur] = nums[curend];
//        nums[curend] = temp2;
//        cur++;
//        curend--;
//    }
//
//    //�ٷ�תbegin->end����
//
//    while (begin < end)
//    {
//        int temp3 = nums[begin];
//        nums[begin] = nums[end];
//        nums[end] = temp3;
//        begin++;
//        end--;
//    }
//}
//977.���������ƽ��
//int* sortedSquares(int* nums, int numsSize, int* returnSize)
//{
//    int* arr = (int*)malloc(sizeof(int) * numsSize);
//
//    int begin, end, pos;
//
//    *returnSize = numsSize;
//    for (begin = 0, end = numsSize - 1, pos = numsSize - 1; begin <= end; pos--)
//    {
//        if (nums[begin] * nums[begin] > nums[end] * nums[end])
//        {
//            arr[pos] = nums[begin] * nums[begin];
//            begin++;
//        }
//        else
//        {
//            arr[pos] = nums[end] * nums[end];
//            end--;
//        }
//    }
//    return arr;
//}