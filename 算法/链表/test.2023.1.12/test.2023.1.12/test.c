#define _CRT_SECURE_NO_WARNINGS 1
//LeetCode
//26.删除有序数组中的重复项
//int removeDuplicates(int* nums, int numsSize)
//{
//    int src = 1;
//    int dst = 0;
//    while (src < numsSize)
//    {
//        if (nums[dst] == nums[src])
//        {
//            src++;
//        }
//        else
//        {
//            dst++;
//            nums[dst] = nums[src];
//            src++;
//        }
//    }
//    return dst + 1;
//}
//27.移除元素
//int removeElement(int* nums, int numsSize, int val)
//{
//    int src = 0;
//    int dst = 0;
//    for (src = 0; src < numsSize; src++)
//    {
//        if (nums[src] != val)
//        {
//            nums[dst] = nums[src];
//            dst++;
//        }
//    }
//    return dst;
//}
//35.搜索插入位置
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
//
//88.合并两个数组
//int cmp(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//    int i = 0;
//    int j = 0;
//    if (m == 0 && n != 0)
//    {
//        while (i < n)
//        {
//            nums1[i] = nums2[i];
//            i++;
//        }
//    }
//    else if (m != 0 && n != 0)
//    {
//        i = m;
//        while (i < m + n)
//        {
//            nums1[i] = nums2[j];
//            j++;
//            i++;
//        }
//    }
//    qsort(nums1, m + n, sizeof(int), cmp);
//}
//136.只出现一次的数字
//int singleNumber(int* nums, int numsSize)
//{
//    int ret = 0;
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        ret = ret ^ nums[i];
//    }
//    return ret;
//}
////217.存在重复元素
//#include <stdbool.h>
//int cmp(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}
//bool containsDuplicate(int* nums, int numsSize)
//{
//    qsort(nums, numsSize, sizeof(int), cmp);
//    int i = 0;
//    for (i = 0; i < numsSize - 1; i++)
//    {
//        if (nums[i] == nums[i + 1])
//        {
//            return true;
//        }
//    }
//    return false;
//}