#define _CRT_SECURE_NO_WARNINGS 1
//35.��������λ��
//int searchInsert(int* nums, int numsSize, int target)
//{
//    int left = 0;
//    int right = numsSize - 1;
//    while (left <= right)
//    {
//        int mid = left + (right - left) / 2;
//        if (target > nums[mid])
//        {
//            left = mid + 1;
//        }
//        else if (target < nums[mid])
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return right + 1;
//}
//278.��һ������汾
//int firstBadVersion(int n)
//{
//    int left = 1;
//    int right = n;
//    while (left <= right)
//    {
//        int version = left + (right - left) / 2;
//        if (isBadVersion(version))
//        {
//            right = version - 1;
//        }
//        else
//        {
//            left = version + 1;
//        }
//    }
//    return left;
//}
//704.���ֲ���
//����ұ�
//int search(int* nums, int numsSize, int target)
//{
//    int left = 0;
//    int right = numsSize - 1;
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (nums[mid] > target)
//        {
//            right = mid - 1;
//        }
//        else if (nums[mid] < target)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return -1;
//}
//����ҿ�
//int search(int* nums, int numsSize, int target)
//{
//    int left = 0;
//    int right = numsSize;
//    while (left < right)
//    {
//        int mid = (left + right) / 2;
//        if (nums[mid] > target)
//        {
//            right = mid;
//        }
//        else if (nums[mid] < target)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return -1;
//}